// cpu first normal tic tac toe


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
fstream pat("patternnc.txt",ios::out|ios::in|ios::trunc);
fstream test("test.txt",ios::out|ios::in|ios::trunc);
fstream file2("file2",ios::out|ios::in|ios::trunc);
fstream file3("file3",ios::out|ios::in|ios::trunc);
fstream file4("file4",ios::out|ios::in|ios::trunc);
//1
p=-1.0;
for(i=1;i<=9;i++){
	D[0]=i;	
a=0;b=0;c=0;
win.open("win",ios::in);
lose.open("lose",ios::in);
draw.open("draw",ios::in);
win.seekg(0,ios::beg);
lose.seekg(0,ios::beg);
draw.seekg(0,ios::beg);
while(win){
for(k=0;k<1;k++)
A[k]=win.get();
if(D[0]==A[0])
 a++; 
win.seekg(8,ios::cur);
}
while(lose){
for(k=0;k<1;k++)
B[k]=lose.get();
if(D[0]==B[0])
 b++;
lose.seekg(8,ios::cur);
}
while(draw){
for(k=0;k<1;k++)
C[k]=draw.get();		
if(D[0]==C[0])
 c++;
draw.seekg(8,ios::cur);
}
 q=(float)(a-b)/(a+b+c);
	test<<i<<"  "<<q<<"  a =  "<<a<<"  b=  "<<b<<"  c=  "<<c<<endl;
	if(q>p){
	 p=q;
	 pj=i;
		}
win.close();
lose.close();
draw.close();
//cout<<win.tellg()<<endl;
//cout<<"D[0]= "<<D[0]<<" D[1]= "<<D[1]<<" a= "<<a<<" b= "<<b<<" c= "<<c<<" a+b+c= "<<a+b+c<<" q= "<<q<<" p= "<<p<<endl;

			}//i	
file1.put(pj);
s=file1.tellg();
cout<<"size= "<<s<<endl;
file1.seekg(0,ios::beg);

//3
	for(i=0;i<s/1;i++)
	{
		D[0]=file1.get();

	for(l=1;l<=9;l++)
	if(D[0]!=l)	{
	D[1]=l;
	p=-1.0;	
	pj=0;
		for(j=1;j<=9;j++)
	      if(l!=j && j!=D[0]){
	a=0;b=0;c=0;
	D[2]=j;
	win.open("win",ios::in);
	lose.open("lose",ios::in);
	draw.open("draw",ios::in);
	win.seekg(0,ios::beg);
	lose.seekg(0,ios::beg);
	draw.seekg(0,ios::beg);
	while(win){
	for(k=0;k<3;k++)
	A[k]=win.get();
	if(D[0]==A[0] && D[1]==A[1] && D[2]==A[2] ){
	 a++;
	}
	win.seekg(6,ios::cur);
	}
	while(lose){
	for(k=0;k<3;k++)
	B[k]=lose.get();
	if(D[0]==B[0] && D[1]==B[1] && D[2]==B[2] )
	 b++;
	lose.seekg(6,ios::cur);
	}
	while(draw){
	for(k=0;k<3;k++)
	C[k]=draw.get();		
	if(D[0]==C[0] && D[1]==C[1] && D[2]==C[2] )
	 c++;
	draw.seekg(6,ios::cur);
	}
	 q=(float)(a-b)/(a+b+c);
	  test<<D[0]<<D[1]<<D[2]<<"  "<<q<<endl;
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
	file2.put(l);
	file2.put(pj);

					}//ll
		}//i2

s=file2.tellg();
cout<<"size= "<<s<<endl;
file2.seekg(0,ios::beg);
//5
	for(i=0;i<s/3;i++)
	{
		D[0]=file2.get();
		 D[1]=file2.get();
		  D[2]=file2.get();
	//cout<<"n"<<D[0]<<D[1]<<D[2]<<D[3]<<"  ";
	for(l=1;l<=9;l++)
	if(D[0]!=l && D[1]!=l && D[2]!=l)	{
	D[3]=l;
	p=-1.0;	
	pj=0;
		for(j=1;j<=9;j++)
	      if(l!=j && j!=D[0] && j!=D[1] && j!=D[2]){
	a=0;b=0;c=0;
	D[4]=j;
	win.open("win",ios::in);
	lose.open("lose",ios::in);
	draw.open("draw",ios::in);
	win.seekg(0,ios::beg);
	lose.seekg(0,ios::beg);
	draw.seekg(0,ios::beg);
	while(win){
	for(k=0;k<5;k++)
	A[k]=win.get();
	if(D[0]==A[0] && D[1]==A[1] && D[2]==A[2] && D[3]==A[3] && D[4]==A[4]){
	 a++;
	}
	win.seekg(4,ios::cur);
	}
	while(lose){
	for(k=0;k<5;k++)
	B[k]=lose.get();
	if(D[0]==B[0] && D[1]==B[1] && D[2]==B[2] && D[3]==B[3] && D[4]==B[4] )
	 b++;
	lose.seekg(4,ios::cur);
	}
	while(draw){
	for(k=0;k<5;k++)
	C[k]=draw.get();		
	if(D[0]==C[0] && D[1]==C[1] && D[2]==C[2] && D[3]==C[3] && D[4]==C[4] )
	 c++;
	draw.seekg(4,ios::cur);
	}
	 q=(float)(a-b)/(a+b+c);
		  test<<D[0]<<D[1]<<D[2]<<D[3]<<D[4]<<"  "<<q<<endl;
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
	file3.put(l);
	file3.put(pj);

					}//ll
		}//i2

s=file3.tellg();
cout<<"size= "<<s<<endl;
file3.seekg(0,ios::beg);
//7
	for(i=0;i<s/5;i++)
	{
		D[0]=file3.get();
		 D[1]=file3.get();
		  D[2]=file3.get();
		   D[3]=file3.get();
		    D[4]=file3.get();
	for(l=1;l<=9;l++)
	if(D[0]!=l && D[1]!=l && D[2]!=l && D[3]!=l && D[4]!=l)	{
	D[5]=l;
	p=-1.0;	
	pj=0;
		for(j=1;j<=9;j++)
	      if(l!=j && j!=D[0] && j!=D[1] && j!=D[2] && j!=D[3] && j!=D[4]){
	a=0;b=0;c=0;
	D[6]=j;
	win.open("win",ios::in);
	lose.open("lose",ios::in);
	draw.open("draw",ios::in);
	win.seekg(0,ios::beg);
	lose.seekg(0,ios::beg);
	draw.seekg(0,ios::beg);
	while(win){
	for(k=0;k<7;k++)
	A[k]=win.get();
	if(D[0]==A[0] && D[1]==A[1] && D[2]==A[2] && D[3]==A[3] && D[4]==A[4] && D[5]==A[5] && D[6]==A[6] ){
	 a++;
	}
	win.seekg(2,ios::cur);
	}
	while(lose){
	for(k=0;k<7;k++)
	B[k]=lose.get();
	if(D[0]==B[0] && D[1]==B[1] && D[2]==B[2] && D[3]==B[3] && D[4]==B[4] && D[5]==B[5] && D[6]==B[6] )
	 b++;
	lose.seekg(2,ios::cur);
	}
	while(draw){
	for(k=0;k<7;k++)
	C[k]=draw.get();		
	if(D[0]==C[0] && D[1]==C[1] && D[2]==C[2] && D[3]==C[3]  && D[4]==C[4] && D[5]==C[5] && D[6]==C[6])
	 c++;
	draw.seekg(2,ios::cur);
	}
	 q=(float)(a-b)/(a+b+c);
		test<<D[0]<<D[1]<<D[2]<<D[3]<<D[4]<<D[5]<<D[6]<<"  "<<q<<endl;
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
	file4.put(D[0]);
	file4.put(D[1]);
	file4.put(D[2]);
	file4.put(D[3]);
	file4.put(D[4]);
	file4.put(l);
	file4.put(pj);
	pat<<"'"<<D[0]<<D[1]<<D[2]<<D[3]<<D[4]<<l<<pj<<"',";
					}//ll
		}//i2
s=file4.tellg();
cout<<"size= "<<s<<endl;
file4.seekg(0,ios::beg);

file1.close();
pat.close();
file2.close();
file3.close();
file4.close();
test.close();
return 0;
}

