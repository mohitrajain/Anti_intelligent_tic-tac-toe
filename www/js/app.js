var app = angular.module('starter', ['ionic','starter.controller','starter.service'])

app.run(function($ionicPlatform) {
  $ionicPlatform.ready(function() {
    if(window.cordova && window.cordova.plugins.Keyboard) {
      cordova.plugins.Keyboard.hideKeyboardAccessoryBar(true);
      cordova.plugins.Keyboard.disableScroll(true);    
    }
    if(window.StatusBar) {
      StatusBar.styleDefault();
    }
  });
});

app.config(function($stateProvider, $urlRouterProvider) {
   
    $stateProvider
    .state('home', {
      url: "/home",
      templateUrl: "templates/home.html",
        controller:'HomeCtrl'
    })
    .state('withPc', {
      url: "/withpc",
      templateUrl: "templates/withpc.html",
      controller: 'WithPcCtrl'
    })
    .state('twoPlayer', {
      url: "/twoplayer",
      templateUrl: "templates/twoplayer.html",
      controller: 'TwoPlayer'
    })
    .state('rules', {
      url: "/rules",
      templateUrl: "templates/rules.html",
      controller: 'Rules'
    });
    
    $urlRouterProvider.otherwise('/home');
    
});