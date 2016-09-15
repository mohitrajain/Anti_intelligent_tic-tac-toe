angular.module('starter.controller',[])
    .controller('HomeCtrl',function($scope,$location,$window){
 
    $scope.redirect = function(url, refresh) {
    if(refresh || $scope.$$phase) {
        $window.location.href = url;
        } else {
        $location.path(url);
        $scope.$apply();
    }
}
    })

.controller('Rules',function($scope){
    $scope.name = '23chiraj';
})

.controller('TwoPlayer',function($scope,twogame,$interval){
    
    var int,interval;
    
    $scope.startTime = function(){
        
        $scope.sec = 30;
        
        int = $interval(function(){
            if($scope.sec === 0)
                $scope.stop();
            else    
            $scope.sec--; 
        },1000);
            
    }
    
        twogame.startgame($scope);
    
    $scope.stop = function(){
        
        $interval.cancel(int);
                int = undefined;
                
                if($scope.turn){
                    console.log('Player1 loses due to time out');
                    $scope.player2++;
                }
                else{
                    console.log('Player2 loses due to time out');
                    $scope.player1++;
                }
        
        $scope.nextGame();
        
    }
    
    $scope.nextGame = function(){
        
                if(angular.isDefined(int)){
                    $interval.cancel(int);
                    int = null;
                }
        
                       if($scope.number < 5)
                           twogame.reinitialise($scope);
                       else{
                         console.log('Game Over');
                         twogame.startgame($scope);  
                       }
    }
    
    $scope.showCut = function(C){
    
    var t = 0;
    console.log('starting interval');
    
                if(angular.isDefined(int)){
                    $interval.cancel(int);
                    int  = null;
                }    
        
    interval = $interval(function(){
        if(t < 8){
            t++;
            console.log('t= ' + t);
            for(var i in C){
                if($scope.colorarr[C[i]] === 0)
                    $scope.colorarr[C[i]] = 1;
                else
                    $scope.colorarr[C[i]] = 0;
            }
            
        }
        else{
            if(angular.isDefined(interval)){
              $interval.cancel(interval);
                
                interval = null;
                console.log('stoping interval');
                $scope.nextGame();
                                            }
        }
        
        },500);
    
}; 
    
     $scope.logvalue = function(x){
         
         if($scope.arr.indexOf(x) < 0 && $scope.gameOn){
             
            if($scope.turn){
               $scope.turn = 0;
                $scope.chararr[x] = 'X';
            }
             
             else{
                $scope.turn = 1;
                $scope.chararr[x] = 'O';
             }
             
             $scope.moves++;
             
             $scope.arr.push(x);
             
              if($scope.moves >= 5){
              var z = twogame.check($scope);  
              console.log(z);
             
                  if(z){
                      $scope.gameOn = 0;
                      if($scope.game === 1 || $scope.game === 3 || $scope.game === 5 ){
                      if($scope.turn){
                        console.log('Player1 Wins in ' + z + 'move');
                          $scope.player1++;
                      }
                      else{
                        console.log('Player2 Wins in ' + z + 'move');
                        $scope.player2++;
                      }
                          
                      }
                      
                      else{   
                       if(!$scope.turn){
                        console.log('Player1 Wins in ' + z + 'move');
                          $scope.player1++;
                      }
                      else{
                        console.log('Player2 Wins in ' + z + 'move');
                        $scope.player2++;
                      }   
                          
                      }
                      
                      $scope.showCut(z);
                  }
                  
                 else if($scope.moves === 9){
                   $scope.nextGame();        
                 }
              
              }
             
         }
         
    };
    
    
    $scope.$on("$destroy", function() {
        if(interval){    
        if (angular.isDefined(interval)) {
            $interval.cancel(interval);
            interval = null;
        }
        }
        
       if(int){
       if (angular.isDefined(int)) {
            $interval.cancel(int);
            int = null;
        }
       }
        
    }); 
     
})

.controller('WithPcCtrl', function($scope,twogame,$interval,pcgame,$timeout) {      
 
       var int,interval;
    
        $scope.stop = function(){
        
        $interval.cancel(int);
                int = undefined;
                
                if($scope.turn){
                    console.log('you loss due to time out');
                    $scope.computer++;
                }
                else{
                    console.log('computer loss due to time out');
                    $scope.you++;
                }
        
        $scope.nextGame();
        
    };
    
    $scope.startTime = function(){
        
        $scope.sec = 30;
        
        int = $interval(function(){
            if($scope.sec === 0)
                $scope.stop();
            else    
            $scope.sec--; 
        },1000);
            
    };
    
    
     $scope.nextGame = function(){
        
                if(angular.isDefined(int)){
                    $interval.cancel(int);
                    int = null;
                }
        
                       if($scope.number < 5)
                           pcgame.reinitialise($scope);
                       else{
                         console.log('Game Over');
                         pcgame.startgame($scope);  
                       }
    };
    
    $scope.showCut = function(C){
    
    var t = 0;
    console.log('starting interval');
    
                if(angular.isDefined(int)){
                    $interval.cancel(int);
                    int  = null;
                }    
        
    interval = $interval(function(){
        if(t < 8){
            t++;
            console.log('t= ' + t);
            for(var i in C){
                if($scope.colorarr[C[i]] === 0)
                    $scope.colorarr[C[i]] = 1;
                else
                    $scope.colorarr[C[i]] = 0;
            }
            
        }
        else{
            if(angular.isDefined(interval)){
              $interval.cancel(interval);
                
                interval = null;
                console.log('stoping interval');
                $scope.nextGame();
                                            }
        }
        
        },500);
    
};    
    
    $scope.checkgame = function(){
        
             if($scope.moves >= 5){
              var z = twogame.check($scope);  
              console.log(z);
             
                  if(z){
                      $scope.gameOn = 0;
                      if($scope.game === 1 || $scope.game === 3 || $scope.game === 5 ){
                      if($scope.turn){
                        console.log('You Won in ' + z + 'move');
                          $scope.you++;
                      }
                      else{
                        console.log('Computer Won in ' + z + 'move');
                        $scope.computer++;
                      }
                          
                      }
                      
                      else{   
                       if(!$scope.turn){
                        console.log('You Won in ' + z + 'move');
                          $scope.you++;
                      }
                      else{
                        console.log('computer Won in ' + z + 'move');
                        $scope.computer++;
                      }   
                          
                      }
                      
                      $scope.showCut(z);
                  }
                  
                 else if($scope.moves === 9){
                     $timeout(function(){
                console.log('next game');
                   $scope.nextGame(); 
                     },2000);       
                 }
              
              }
    };    
    
     $scope.logvalue = function(x){
         
         if($scope.arr.indexOf(x) < 0 && $scope.gameOn && $scope.turn){
             
               $scope.turn = 0;
              if($scope.randomnumber)
               $scope.chararr[x] = 'X';
                else
               $scope.chararr[x] = 'O';   
            
               $scope.moves++;
             
               $scope.arr.push(x);
             
                $scope.checkgame();
         
                if($scope.moves < 9 && $scope.gameOn){
                    console.log('you are calling cpu play');    
                    pcgame.play($scope);
                }
         }
         
    };
    
    pcgame.startgame($scope); 
    
    $scope.$on("$destroy", function() {
        if(interval){    
        if (angular.isDefined(interval)) {
            $interval.cancel(interval);
            interval = null;
        }
        }
        
       if(int){
       if (angular.isDefined(int)) {
            $interval.cancel(int);
            int = null;
        }
       }
        
    }); 
 
    
    });