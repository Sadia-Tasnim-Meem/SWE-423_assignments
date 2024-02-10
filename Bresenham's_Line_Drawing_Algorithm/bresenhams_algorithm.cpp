#include <bits/stdc++.h>

using namespace std;

void bresenham(int x0, int y0, int  xf, int yf){
    
    int dx = (xf - x0);
    int dy = (yf - y0);
    

    //case 1 when 0 < abs(m) <= 1
    if(abs(dy) > 0 && abs(dy) < abs(dx)){
        int x = x0;
        int y;
        if(dy < 0)y = -y0;
        else y = y0;
        int dT = 2*(dy - dx); //taking the pixel on the upper right corner
        int dS = 2*dy; //taking the pixel on the right
        int d = 2*dy - dx; 
        cout<<x<<" "<<y<<endl;
        while(x < xf){
            x++;
            if(d < 0){
                d += dS;
            }
            else{
                y++;
                d += dT;
            }
            
            cout<<x<<" "<<y<<endl;
        }
    }

    //case 2 when abs(m) > 1
    else if(abs(dy) > abs(dx)){
        int x = x0, y = y0;
        int dT = 2*(dx-dy); 
        int dS = 2*dx; 
        int d = 2*dx - dy; 
        cout<<x<<" "<<y<<endl;
        while(y < yf){
            y++;
            if(d < 0){
                d += dS;
            }
            else{
                x++;
                d += dT;
            }
            cout<<x<<" "<<y<<endl;
        }
    }
}

int main(){
    int test_cases = 2;
    while(test_cases--){
        int x_initial, x_final, y_initial, y_final;
        cout<<"Enter the initial point: x: ";
        cin>>x_initial;
        cout<<" y: ";
        cin>>y_initial;
        cout<<"Enter terminal point: x: ";
        cin>>x_final;
        cout<<" y: ";
        cin>>y_final;
        

        //ensuring the initial x coordinate is less than final x coordinate
        if(x_initial >= x_final){
            cout<<"Invalid input"<<endl;
            continue;
        }
        cout<<endl;
        cout<<x_initial<<" "<<y_initial<<endl;
        cout<<x_final<<" "<<y_final<<endl;

        cout<<endl;

        bresenham(x_initial, y_initial, x_final, y_final);
        cout<<endl;
        
    }
}