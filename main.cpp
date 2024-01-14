#include <iostream>
using namespace std;
void sovle(float a,float b,float c,float d,float e,float f);

int main()
{
    cout << "Enter the value of the equation\n Ax + By =C \n Dx + Ey = F" << endl;

    float a,b,c,d,e,f;
    cin>> a>> b>> c>> d>> e>> f;
    sovle(a,b,c,d,e,f);

    return 0;
}

void sovle (float a,float b,float c,float d,float e,float f){
float a1=a;

//finding x
float y;
a=a*d;
b=b*d;
c=c*d;
d=d*a1;
e=e*a1;
f=f*a1;
//add equation
if((a<0&&d>0) || (a>0&&d<0))
{
    y=(c+f)/(b+e);
}
//subtract equation
if((a<0&&d<0) || (a>0&&d>0)){


    y=(c-f)/(b-e);

}   //from equation 1
    float x=(c-(b*y))/a;

cout<<"Therefore for the given equation"<<endl;
cout<< a<<"x +"<< b<<"y =" <<c <<"---- 1"<<endl;
cout<< d<<"x +"<< e<<"y =" <<f <<"---- 2"<<endl;
cout<<"x ="<<x<<" y ="<<y<<endl;


}















