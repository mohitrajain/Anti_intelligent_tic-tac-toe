#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream file0("file2",ios::in|ios::out|ios::trunc|ios::binary);
fstream file1("1.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file2("2.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file3("3.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file4("4.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file5("5.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file6("6.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file7("7.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file8("8.txt",ios::in|ios::out|ios::trunc|ios::binary);
fstream file9("9.txt",ios::in|ios::out|ios::trunc|ios::binary);
int i,j,k,x,y,z,l;
int n,A[9];
file1.put(2);
for(i=1;i<=9;i++){
if(i!=2)
file2.put(i);
}
for(j=3;j<=9;j++){
if(j==3){
file2.seekg(0,ios::end);
x=file2.tellg();
cout<<"size of file2 is"<<x<<endl;
file2.seekg(0,ios::beg);

			for(k=0;k<x;k++){
			y=file2.get();
			//cout<<endl<<"y= "<<y<<endl;
			file2.seekg(0,ios::beg);
			for(l=0;l<x;l++)
			{
			z=file2.get();
			if(z!=y){
			//cout<<"z= "<<z<<" ";
			file3.put(z);}
					}
		file2.seekg(k+1,ios::beg);
				
						}
}
else if(j==4){
file3.seekg(0,ios::end);
x=file3.tellg();
cout<<"size of file3 is"<<x<<endl;
file3.seekg(0,ios::beg);

				for(k=0;k<x;k++){
				y=file3.get();
				//cout<<endl<<"y= "<<y<<endl;
				file3.seekg((k/7)*7,ios::beg);
				for(l=(k/7)*7;l<((k/7)+1)*7;l++){
				z=file3.get();
				if(z!=y){
				//cout<<"z= "<<z<<" ";
				file4.put(z);}
				}

				file3.seekg(k+1,ios::beg);
						}
}
else if(j==5){
file4.seekg(0,ios::end);
x=file4.tellg();
cout<<"size of file4 is"<<x<<endl;
file4.seekg(0,ios::beg);
			for(k=0;k<x;k++){
			y=file4.get();
			file4.seekg((k/6)*6,ios::beg);
			//cout<<endl<<"y= "<<y<<endl;

			for(l=(k/6)*6;l<((k/6)+1)*6;l++){
			z=file4.get();
			if(z!=y){
			file5.put(z);}
				}

			file4.seekg(k+1,ios::beg);
							}
}

else if(j==6){
file5.seekg(0,ios::end);
x=file5.tellg();
cout<<"size of file5 is"<<x<<endl;
file5.seekg(0,ios::beg);
			for(k=0;k<x;k++){
			y=file5.get();
			file5.seekg((k/5)*5,ios::beg);
			//cout<<endl<<"y= "<<y<<endl;

			for(l=(k/5)*5;l<((k/5)+1)*5;l++){
			z=file5.get();
			if(z!=y){
			file6.put(z);}
				}

			file5.seekg(k+1,ios::beg);
							}
}

else if(j==7){
file6.seekg(0,ios::end);
x=file6.tellg();
cout<<"size of file6 is"<<x<<endl;
file6.seekg(0,ios::beg);
			for(k=0;k<x;k++){
			y=file6.get();
			file6.seekg((k/4)*4,ios::beg);
			//cout<<endl<<"y= "<<y<<endl;

			for(l=(k/4)*4;l<((k/4)+1)*4;l++){
			z=file6.get();
			if(z!=y){
			file7.put(z);}
				}

			file6.seekg(k+1,ios::beg);
							}
}

else if(j==8){
file7.seekg(0,ios::end);
x=file7.tellg();
cout<<"size of file7 is"<<x<<endl;
file7.seekg(0,ios::beg);
			for(k=0;k<x;k++){
			y=file7.get();
			file7.seekg((k/3)*3,ios::beg);
			//cout<<endl<<"y= "<<y<<endl;

			for(l=(k/3)*3;l<((k/3)+1)*3;l++){
			z=file7.get();
			if(z!=y){
			file8.put(z);}
				}

			file7.seekg(k+1,ios::beg);
							}
}

else if(j==9){
file8.seekg(0,ios::end);
x=file8.tellg();
cout<<"size of file8 is"<<x<<endl;
file8.seekg(0,ios::beg);
			for(k=0;k<x;k++){
			y=file8.get();
			file8.seekg((k/2)*2,ios::beg);
			//cout<<endl<<"y= "<<y<<endl;

			for(l=(k/2)*2;l<((k/2)+1)*2;l++){
			z=file8.get();
			if(z!=y){
			file9.put(z);}
				}

			file8.seekg(k+1,ios::beg);
							}
}

}


file9.seekg(0,ios::end);
n=file9.tellg();
cout<<"n= "<<n<<endl;
file9.seekg(0,ios::beg);
file8.seekg(0,ios::beg);
file7.seekg(0,ios::beg);
file6.seekg(0,ios::beg);
file5.seekg(0,ios::beg);
file4.seekg(0,ios::beg);
file3.seekg(0,ios::beg);
file2.seekg(0,ios::beg);
file1.seekg(0,ios::beg);
for(i=1;i<=n;i++){
A[8]=file9.get();
//cout<<"A[8]= "<<A[8]<<" ";
A[7]=file8.get();
//cout<<"A[7]= "<<A[7]<<" ";
A[6]=file7.get();
//cout<<"A[6]= "<<A[6]<<" ";
A[5]=file6.get();
//cout<<"A[5]= "<<A[5]<<" ";
A[4]=file5.get();
//cout<<"A[4]= "<<A[4]<<" ";
A[3]=file4.get();
//cout<<"A[3]= "<<A[3]<<" ";
A[2]=file3.get();
//cout<<"A[2]= "<<A[2]<<" ";
A[1]=file2.get();
//cout<<"A[1]= "<<A[1]<<" ";
A[0]=file1.get();
//cout<<"A[0]= "<<A[0]<<" ";
file7.seekg(i/2,ios::beg);
file6.seekg(i/6,ios::beg);
file5.seekg(i/24,ios::beg);
file4.seekg(i/120,ios::beg);
file3.seekg(i/720,ios::beg);
file2.seekg(i/5040,ios::beg);
file1.seekg(i/40320,ios::beg);
//cout<<endl;
for(j=0;j<9;j++)
file0.put(A[j]);
}
file0.seekg(0,ios::beg);

file0.close();
file1.close();
file2.close();
file3.close();
file4.close();
file5.close();
file6.close();
file7.close();
file8.close();
file9.close();
return 0;
}
