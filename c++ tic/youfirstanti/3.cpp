//anti first you tic toe

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int i,j,k,A[9],B[9],C[9],D[9],s,a,b,c,pj,l;
float p,q;
fstream win;
fstream draw;
fstream lose;
fstream file1("file1",ios::out|ios::in|ios::trunc);
fstream pat("antiyou.txt",ios::out|ios::in|ios::trunc);
fstream test("test.txt",ios::out|ios::in|ios::trunc);
fstream file2("file2",ios::out|ios::in|ios::trunc);
fstream file3("file3",ios::out|ios::in|ios::trunc);
win.seekg(0,ios::beg);
lose.seekg(0,ios::beg);
draw.seekg(0,ios::beg);
//2

for(i=1;i<=9;i++){
	D[0]=i;
p=-2.0;	
pj=0;
	for(j=1;j<=9;j++)
      if(i!=j){
a=0;b=0;c=0;
D[1]=j;
win.open("win",ios::in);
lose.open("lose",ios::in);
draw.open("draw",ios::in);
win.seekg(0,ios::beg);
lose.seekg(0,ios::beg);
draw.seekg(0,ios::beg);
while(win){
for(k=0;k<2;k++)
A[k]=win.get();
if(D[0]==A[0] && D[1]==A[1])
 a++; 
win.seekg(7,ios::cur);
}
while(lose){
for(k=0;k<2;k++)
B[k]=lose.get();
if(D[0]==B[0] && D[1]==B[1])
 b++;
lose.seekg(7,ios::cur);
}
while(draw){
for(k=0;k<2;k++)
C[k]=draw.get();		
if(D[0]==C[0] && D[1]==C[1])
 c++;
draw.seekg(7,ios::cur);
}
 q=(float)(a-b)/(a+b+c);
	test<<D[0]<<D[1]<<"  "<<q<<endl;
	if(q>=p){
	 p=q;
	 pj=j;
		}
win.close();
lose.close();
draw.close();
//cout<<win.tellg()<<endl;
//cout<<"D[0]= "<<D[0]<<" D[1]= "<<D[1]<<" a= "<<a<<" b= "<<b<<" c= "<<c<<" a+b+c= "<<a+b+c<<" q= "<<q<<" p= "<<p<<endl;
		}//j
file1.put(i);
file1.put(pj);
			}//i	
	
s=file1.tellg();
cout<<"size= "<<s<<endl;
file1.seekg(0,ios::beg);
//4	
	for(i=0;i<s/2;i++)
	{
		D[0]=file1.get();
		 D[1]=file1.get();
	for(l=1;l<=9;l++)
	if(D[0]!=l && D[1]!=l)	{
	D[2]=l;
	p=-2.0;	
	pj=0;
		for(j=1;j<=9;j++)
	      if(l!=j && j!=D[0] && j!=D[1]){
	a=0;b=0;c=0;
	D[3]=j;
	win.open("win",ios::in);
	lose.open("lose",ios::in);
	draw.open("draw",ios::in);
	win.seekg(0,ios::beg);
	lose.seekg(0,ios::beg);
	draw.seekg(0,ios::beg);
	while(win){
	for(k=0;k<4;k++)
	A[k]=win.get();
	if(D[0]==A[0] && D[1]==A[1] && D[2]==A[2] && D[3]==A[3] ){
	 a++;
	}
	win.seekg(5,ios::cur);
	}
	while(lose){
	for(k=0;k<4;k++)
	B[k]=lose.get();
	if(D[0]==B[0] && D[1]==B[1] && D[2]==B[2] && D[3]==B[3] )
	 b++;
	lose.seekg(5,ios::cur);
	}
	while(draw){
	for(k=0;k<4;k++)
	C[k]=draw.get();		
	if(D[0]==C[0] && D[1]==C[1] && D[2]==C[2] && D[3]==C[3] )
	 c++;
	draw.seekg(5,ios::cur);
	}
	 q=(float)(a-b)/(a+b+c);
	test<<D[0]<<D[1]<<D[2]<<D[3]<<"  "<<q<<endl;
		if(q>=p){
		 p=q;
		 pj=j;
			}
	win.close();
	lose.close();
	draw.close();
	//if(l==3)
	//cout<<"D[0]= "<<D[0]<<" D[1]= "<<D[1]<<" l= "<<l<<" j= "<<j<<" a= "<<a<<" b= "<<b<<" c= "<<c<<" a+b+c= "<<a+b+c<<" q= "<<q<<" p= "<<p<<endl;
			}//j
	file2.put(D[0]);
	file2.put(D[1]);
	file2.put(l);
	file2.put(pj);
					}//ll
		}//i2

//6
s=file2.tellg();
cout<<"size= "<<s<<endl;
file2.seekg(0,ios::beg);
/*for(i=0;i<s/4;i++){
for(j=0;j<4;j++)
D[j]=file2.get();
for(j=0;j<4;j++)
cout<<D[j];
cout<<"			";
}*/

	for(i=0;i<s/4;i++)
	{
		D[0]=file2.get();
		 D[1]=file2.get();
		  D[2]=file2.get();
		   D[3]=file2.get();
	//cout<<"n"<<D[0]<<D[1]<<D[2]<<D[3]<<"  ";
	for(l=1;l<=9;l++)
	if(D[0]!=l && D[1]!=l && D[2]!=l && D[3]!=l)	{
	D[4]=l;
	p=-2.0;	
	pj=0;
		for(j=1;j<=9;j++)
	      if(l!=j && j!=D[0] && j!=D[1] && j!=D[2] && j!=D[3]){
	a=0;b=0;c=0;
	D[5]=j;
	win.open("win",ios::in);
	lose.open("lose",ios::in);
	draw.open("draw",ios::in);
	win.seekg(0,ios::beg);
	lose.seekg(0,ios::beg);
	draw.seekg(0,ios::beg);
	while(win){
	for(k=0;k<6;k++)
	A[k]=win.get();
	if(D[0]==A[0] && D[1]==A[1] && D[2]==A[2] && D[3]==A[3] && D[4]==A[4] && D[5]==A[5]){
	 a++;
	}
	win.seekg(3,ios::cur);
	}
	while(lose){
	for(k=0;k<6;k++)
	B[k]=lose.get();
	if(D[0]==B[0] && D[1]==B[1] && D[2]==B[2] && D[3]==B[3] && D[4]==B[4] && D[5]==B[5] )
	 b++;
	lose.seekg(3,ios::cur);
	}
	while(draw){
	for(k=0;k<6;k++)
	C[k]=draw.get();		
	if(D[0]==C[0] && D[1]==C[1] && D[2]==C[2] && D[3]==C[3] && D[4]==C[4] && D[5]==C[5] )
	 c++;
	draw.seekg(3,ios::cur);
	}
	 q=(float)(a-b)/(a+b+c);
		test<<D[0]<<D[1]<<D[2]<<D[3]<<D[4]<<D[5]<<"  "<<q<<endl;
		if(q>=p){
		 p=q;
		 pj=j;
			}
	win.close();
	lose.close();
	draw.close();
	//if(l==3)
	//cout<<"D[0]= "<<D[0]<<" D[1]= "<<D[1]<<" l= "<<l<<" j= "<<j<<" a= "<<a<<" b= "<<b<<" c= "<<c<<" a+b+c= "<<a+b+c<<" q= "<<q<<" p= "<<p<<endl;
			}//j
	file3.put(D[0]);
	file3.put(D[1]);
	file3.put(D[2]);
	file3.put(D[3]);
	file3.put(l);
	file3.put(pj);
					}//ll
		}//i2

//8

s=file3.tellg();
cout<<"size= "<<s<<endl;
file3.seekg(0,ios::beg);

	for(i=0;i<s/6;i++)
	{
		D[0]=file3.get();
		 D[1]=file3.get();
		  D[2]=file3.get();
		   D[3]=file3.get();
		    D[4]=file3.get();
		     D[5]=file3.get();
	for(l=1;l<=9;l++)
	if(D[0]!=l && D[1]!=l && D[2]!=l && D[3]!=l && D[4]!=l && D[5]!=l)	{
	D[6]=l;
	p=-2.0;	
	pj=0;
		for(j=1;j<=9;j++)
	      if(l!=j && j!=D[0] && j!=D[1] && j!=D[2] && j!=D[3] && j!=D[4] && j!=D[5]){
	a=0;b=0;c=0;
	D[7]=j;
	win.open("win",ios::in);
	lose.open("lose",ios::in);
	draw.open("draw",ios::in);
	win.seekg(0,ios::beg);
	lose.seekg(0,ios::beg);
	draw.seekg(0,ios::beg);
	while(win){
	for(k=0;k<8;k++)
	A[k]=win.get();
	if(D[0]==A[0] && D[1]==A[1] && D[2]==A[2] && D[3]==A[3] && D[4]==A[4] && D[5]==A[5] && D[6]==A[6] && D[7]==A[7] ){
	 a++;
	}
	win.seekg(1,ios::cur);
	}
	while(lose){
	for(k=0;k<8;k++)
	B[k]=lose.get();
	if(D[0]==B[0] && D[1]==B[1] && D[2]==B[2] && D[3]==B[3] && D[4]==B[4] && D[5]==B[5] && D[6]==B[6] && D[7]==B[7] )
	 b++;
	lose.seekg(1,ios::cur);
	}
	while(draw){
	for(k=0;k<8;k++)
	C[k]=draw.get();		
	if(D[0]==C[0] && D[1]==C[1] && D[2]==C[2] && D[3]==C[3]  && D[4]==C[4] && D[5]==C[5] && D[6]==C[6] && D[7]==C[7])
	 c++;
	draw.seekg(1,ios::cur);
	}
	 q=(float)(a-b)/(a+b+c);
	  test<<D[0]<<D[1]<<D[2]<<D[3]<<D[4]<<D[5]<<D[6]<<D[7]<<"  "<<q<<endl;
		if(q>=p){
		 p=q;
		 pj=j;
			}
	win.close();
	lose.close();
	draw.close();
	//if(l==3)
	//cout<<"D[0]= "<<D[0]<<" D[1]= "<<D[1]<<" l= "<<l<<" j= "<<j<<" a= "<<a<<" b= "<<b<<" c= "<<c<<" a+b+c= "<<a+b+c<<" q= "<<q<<" p= "<<p<<endl;
			}//j
	pat<<"'"<<D[0]<<D[1]<<D[2]<<D[3]<<D[4]<<D[5]<<l<<pj<<"',";
					}//ll
		}//i2



file1.close();
pat.close();
test.close();
file2.close();
file3.close();
return 0;
}

