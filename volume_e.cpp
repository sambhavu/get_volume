
double get_volume(double p, double max)
{
     double d, q; 
     double perc; 
     

    if(p>1.0 || max<0){
          return 0; 
     } 

    else{ 
          if(p>.5){ 
            d=1.0;
             perc=exp(1+p)/exp(2.0); 
             return perc*max*d; 
           
           } 


           else{ 
            d=-1.0; 
            q=1-p; 
            perc=exp(1+q)/exp(2.0); 
            return perc*max*d; 
           
           } 

          
       
          
} 

           
