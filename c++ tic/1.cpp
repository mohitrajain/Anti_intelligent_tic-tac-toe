#include<iostream>
#include<fstream>
using namespace std;
int B[5],BB[4],BBB[3],CC[4],CCC[3],i,j,m,q;
void sort(int *P,int n){
	for(i=0;i<n;i++)
	{  m=i;
		for(j=i+1;j<n;j++)
			if(P[m]>P[j])
			m=j;
	  q=P[i];
	 P[i]=P[m];
	P[m]=q;
		}
}

int checkq(int *A){
B[0]=A[0];
B[1]=A[2];
B[2]=A[4];
B[3]=A[6];
B[4]=A[8];
CC[0]=A[1];
CC[1]=A[3];
CC[2]=A[5];
CC[3]=A[7];
/*for(i=0;i<5;i++)
cout<<B[i]<<" ";
cout<<endl;
for(i=0;i<4;i++)
cout<<C[i]<<" ";
cout<<endl;*/
for(i=0;i<4;i++){
BB[i]=B[i];
if(i<3){
BBB[i]=B[i];
CCC[i]=CC[i];
}
}
sort(B,5);
sort(BB,4);
sort(BBB,3);
sort(CC,4);
sort(CCC,3);
if( (BBB[0]==1 && BBB[1]==2 && BBB[2]==3) || (BBB[0]==4 && BBB[1]==5 && BBB[2]==6) || (BBB[0]==7 && BBB[1]==8 && BBB[2]==9) || (BBB[0]==1 && BBB[1]==4 && BBB[2]==7) || (BBB[0]==2 && BBB[1]==5 && BBB[2]==8) || (BBB[0]==3 && BBB[1]==6 && BBB[2]==9) || (BBB[0]==1 && BBB[1]==5 && BBB[2]==9) || (BBB[0]==3 && BBB[1]==5 && BBB[2]==7))
return 5;
else if( (CCC[0]==1 && CCC[1]==2 && CCC[2]==3) || (CCC[0]==4 && CCC[1]==5 && CCC[2]==6) || (CCC[0]==7 && CCC[1]==8 && CCC[2]==9) || (CCC[0]==1 && CCC[1]==4 && CCC[2]==7) || (CCC[0]==2 && CCC[1]==5 && CCC[2]==8) || (CCC[0]==3 && CCC[1]==6 && CCC[2]==9) || (CCC[0]==1 && CCC[1]==5 && CCC[2]==9) || (CCC[0]==3 && CCC[1]==5 && CCC[2]==7))
return 6;
else if( (BB[0]==1 && BB[1]==2 && BB[2]==3) || (BB[0]==4 && BB[1]==5 && BB[2]==6) || (BB[0]==1 && BB[1]==4 && BB[2]==7) || (BB[0]==2 && BB[1]==5 && BB[2]==8) || (BB[0]==3 && BB[1]==5 && BB[2]==7) || (BB[0]==1 && BB[1]==4 && BB[3]==7) || (BB[0]==2 && BB[1]==5 && BB[3]==8) || (BB[0]==3 && BB[1]==6 && BB[3]==9) || (BB[0]==1 && BB[1]==5 && BB[3]==9) || (BB[0]==3 && BB[1]==5 && BB[3]==7) || (BB[1]==4 && BB[2]==5 && BB[3]==6) || (BB[1]==7 && BB[2]==8 && BB[3]==9) || (BB[1]==2 && BB[2]==5 && BB[3]==8) || (BB[1]==3 && BB[2]==6 && BB[3]==9) || (BB[1]==3 && BB[2]==5 && BB[3]==7) || (BB[0]==1 && BB[2]==4 && BB[3]==7) || (BB[0]==2 && BB[2]==5 && BB[3]==8) || (BB[0]==3 && BB[2]==6 && BB[3]==9) || (BB[0]==1 && BB[2]==5 && BB[3]==9) || (BB[0]==3 && BB[2]==5 && BB[3]==7) )
return 7;
else if( (CC[0]==1 && CC[1]==2 && CC[2]==3) || (CC[0]==4 && CC[1]==5 && CC[2]==6) || (CC[0]==1 && CC[1]==4 && CC[2]==7) || (CC[0]==2 && CC[1]==5 && CC[2]==8) || (CC[0]==3 && CC[1]==5 && CC[2]==7) || (CC[0]==1 && CC[1]==4 && CC[3]==7) || (CC[0]==2 && CC[1]==5 && CC[3]==8) || (CC[0]==3 && CC[1]==6 && CC[3]==9) || (CC[0]==1 && CC[1]==5 && CC[3]==9) || (CC[0]==3 && CC[1]==5 && CC[3]==7) || (CC[1]==4 && CC[2]==5 && CC[3]==6) || (CC[1]==7 && CC[2]==8 && CC[3]==9) || (CC[1]==2 && CC[2]==5 && CC[3]==8) || (CC[1]==3 && CC[2]==6 && CC[3]==9) || (CC[1]==3 && CC[2]==5 && CC[3]==7) || (CC[0]==1 && CC[2]==4 && CC[3]==7) || (CC[0]==2 && CC[2]==5 && CC[3]==8) || (CC[0]==3 && CC[2]==6 && CC[3]==9) || (CC[0]==1 && CC[2]==5 && CC[3]==9) || (CC[0]==3 && CC[2]==5 && CC[3]==7) )
return 8;
else if( (B[0]==1 && B[1]==2 && B[2]==3) || (B[0]==4 && B[1]==5 && B[2]==6) || (B[0]==1 && B[1]==4 && B[2]==7) || (B[0]==3 && B[1]==5 && B[2]==7) || (B[0]==1 && B[1]==4 && B[3]==7) || (B[0]==2 && B[1]==5 && B[3]==8) || (B[0]==3 && B[1]==5 && B[3]==7) || (B[1]==4 && B[2]==5 && B[3]==6) || (B[1]==2 && B[2]==5 && B[3]==8) || (B[1]==3 && B[2]==5 && B[3]==7) || (B[0]==1 && B[2]==4 && B[3]==7) || (B[0]==2 && B[2]==5 && B[3]==8) || (B[0]==3 && B[2]==5 && B[3]==7) || (B[0]==1 && B[1]==4 && B[4]==7) || (B[0]==2 && B[1]==5 && B[4]==8) || (B[0]==3 && B[1]==6 && B[4]==9) || (B[0]==1 && B[1]==5 && B[4]==9) || (B[0]==1 && B[2]==4 && B[4]==7) || (B[0]==2 && B[2]==5 && B[4]==8) || (B[0]==3 && B[2]==6 && B[4]==9) || (B[0]==1 && B[2]==5 && B[4]==9) || (B[0]==3 && B[2]==5 && B[4]==7) || (B[0]==1 && B[3]==4 && B[4]==7) || (B[0]==2 && B[3]==5 && B[4]==8) || (B[0]==3 && B[3]==6 && B[4]==9) || (B[0]==1 && B[3]==5 && B[4]==9) || (B[1]==2 && B[3]==5 && B[4]==8) || (B[1]==3 && B[3]==6 && B[4]==9) || (B[1]==3 && B[3]==5 && B[4]==7) || (B[2]==4 && B[3]==5 && B[4]==6) || (B[2]==7 && B[3]==8 && B[4]==9) || (B[2]==3 && B[3]==6 && B[4]==9) || (B[2]==3 && B[3]==5 && B[4]==7) || (B[1]==2 && B[2]==5 && B[4]==8) || (B[1]==3 && B[2]==6 && B[4]==9) || (B[1]==3 && B[2]==5 && B[4]==7))
return 9;
else 
return 0;
}

int main()
{
fstream file1("file1",ios::in);
fstream file2("file2",ios::in);
fstream file3("file3",ios::in);
fstream file4("file4",ios::in);
fstream file5("file5",ios::in);
fstream file6("file6",ios::in);
fstream file7("file7",ios::in);
fstream file8("file8",ios::in);
fstream file9("file9",ios::in);
fstream win("win",ios::in|ios::out|ios::trunc|ios::binary);
fstream draw("draw",ios::in|ios::out|ios::trunc|ios::binary);
fstream lose("lose",ios::in|ios::out|ios::trunc|ios::binary);
int A[9],l,ii;
long int n,k;
file1.seekg(0,ios::end);
n=file1.tellg();
cout<<"Size of first file - "<<n<<endl;
file1.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file1.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
	if(l%2==1){
	for(j=0;j<9;j++)	
	win.put(A[j]);
//	win<<A[j];
//	win<<l;
//	win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)	
	lose.put(A[j]);	
	//lose<<A[j];
//	lose<<l;
//	lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	draw.put(A[j]);
	//draw<<A[j];
	//draw<<endl;
	}
	//cout<<endl<<"l= "<<l;
	//cin>>l;
}

file2.seekg(0,ios::end);
n=file2.tellg();
cout<<"Size of second file - "<<n<<endl;
file2.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file2.get();
	//cout<<"  input "<<endl;
	//cout<<endl<<"l= "<<l;
	l=checkq(A);
	if(l%2==1){
	for(j=0;j<9;j++)
	win.put(A[j]);
//	cout<<"win"<<A[i]<<endl;
//	win<<A[j];	
//	win<<l;
//	win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)	
	lose.put(A[j]);	
//lose<<A[j];
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	draw.put(A[j]);
//	cout<<"win"<<A[i]<<endl;
	//draw<<A[j];
	//draw<<endl;
	}
	//cin>>l;
}
file3.seekg(0,ios::end);
n=file3.tellg();
cout<<"Size of 3 file - "<<n<<endl;
file3.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file3.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
	if(l%2==1){
	for(j=0;j<9;j++)
	//win<<A[j];	
	win.put(A[j]);
//	win<<l;
	//win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)
	//lose<<A[j];	
	lose.put(A[j]);	
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	//draw<<A[j];
	draw.put(A[j]);
	//draw<<endl;
	}
	//cout<<endl<<"l= "<<l;
	//cin>>l;
}
file4.seekg(0,ios::end);
n=file4.tellg();
cout<<"Size of 4 file - "<<n<<endl;
file4.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file4.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
	if(l%2==1){
	for(j=0;j<9;j++)
	//win<<A[j];	
	win.put(A[j]);
//	win<<l;
	//win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)
	//lose<<A[j];	
	lose.put(A[j]);	
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	//draw<<A[j];
	draw.put(A[j]);
	//draw<<endl;
	}//cout<<endl<<"l= "<<l;
	//cin>>l;
}
file5.seekg(0,ios::end);
n=file5.tellg();
cout<<"Size of 5 file - "<<n<<endl;
file5.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file5.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
		if(l%2==1){
	for(j=0;j<9;j++)
	//win<<A[j];	
	win.put(A[j]);
//	win<<l;
	//win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)
	//lose<<A[j];	
	lose.put(A[j]);	
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	//draw<<A[j];
	draw.put(A[j]);
	//draw<<endl;
	}
	//cout<<endl<<"l= "<<l;
	//cin>>l;
}
file6.seekg(0,ios::end);
n=file6.tellg();
cout<<"Size of first file - "<<n<<endl;
file6.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file6.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
		if(l%2==1){
	for(j=0;j<9;j++)
	//win<<A[j];	
	win.put(A[j]);
//	win<<l;
	//win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)
	//lose<<A[j];	
	lose.put(A[j]);	
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	//draw<<A[j];
	draw.put(A[j]);
	//draw<<endl;
	}//cout<<endl<<"l= "<<l;
	//cin>>l;
}
file7.seekg(0,ios::end);
n=file7.tellg();
cout<<"Size of 7 file - "<<n<<endl;
file7.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file7.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
		if(l%2==1){
	for(j=0;j<9;j++)
	//win<<A[j];	
	win.put(A[j]);
//	win<<l;
	//win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)
	//lose<<A[j];	
	lose.put(A[j]);	
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	//draw<<A[j];
	draw.put(A[j]);
	//draw<<endl;
	}//cout<<endl<<"l= "<<l;
	//cin>>l;
}
file8.seekg(0,ios::end);
n=file8.tellg();
cout<<"Size of first file - "<<n<<endl;
file8.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file8.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
		if(l%2==1){
	for(j=0;j<9;j++)
	//win<<A[j];	
	win.put(A[j]);
//	win<<l;
	//win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)
	//lose<<A[j];	
	lose.put(A[j]);	
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	//draw<<A[j];
	draw.put(A[j]);
	//draw<<endl;
	}
	//cout<<endl<<"l= "<<l;
	//cin>>l;
}
file9.seekg(0,ios::end);
n=file9.tellg();
cout<<"Size of 9 file - "<<n<<endl;
file9.seekg(0,ios::beg);

for(ii=0;ii<n/9;ii++){

	for(k=ii*9;k<(ii+1)*9;k++)
	A[k-(ii*9)]=file9.get();
	//cout<<"  input "<<endl;
	l=checkq(A);
		if(l%2==1){
	for(j=0;j<9;j++)
	//win<<A[j];	
	win.put(A[j]);
//	win<<l;
	//win<<endl;
	}
	else if(l%2==0 && l!=0){
	for(j=0;j<9;j++)
	//lose<<A[j];	
	lose.put(A[j]);	
//	lose<<l;
	//lose<<endl;
		}
	else if(l==0){
	for(j=0;j<9;j++)
	//draw<<A[j];
	draw.put(A[j]);
	//draw<<endl;
	}
	//cout<<endl<<"l= "<<l;
	//cin>>l;
}

file1.close();
file2.close();
file3.close();
file4.close();
file5.close();
file6.close();
file7.close();
file8.close();
file9.close();
win.close();
draw.close();
lose.close();
return 0;
}
