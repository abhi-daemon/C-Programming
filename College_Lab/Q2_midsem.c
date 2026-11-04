#include <stdio.h>
int main(){
    float load, bill_unit, free_unit, fixed_charge, surcharge;
    double bill=0;
    int bill_period;
    printf("Enter accept load(kw):");
    scanf("%f",&load);
    printf("Enter Electricity consumed(unit):");
    scanf("%f",&bill_unit);
    printf("Enter billing period(days):");
    scanf("%d",&bill_period);

    free_unit =(125.0/30.0)*bill_period;  
    fixed_charge =(80.0/30.0)*load*bill_period;  

    if(bill_unit <= free_unit){  
        bill=0;  
    }else if(bill_unit > 200){  
        if(free_unit >200){  
            bill=(bill_unit - free_unit)*7.0;  
        }else if(free_unit > 100){  
            bill=(bill_unit-200)*7.0 + (200-free_unit)*5.5;  
        }else{  
            bill=(bill_unit-200)*7.0 + 100*5.5 + (100-free_unit)*4.5;}  
    }else if(bill_unit > 100){  
            if(free_unit >100){  
                bill=(bill_unit - free_unit)*5.5;  
            }else{  
                bill=(bill_unit-100)*5.5 + (100-free_unit)*4.5;  
            }
    }else{  
            bill=(bill_unit-free_unit)*4.5;  
    }  

    bill= bill + fixed_charge;  

    if(bill<=(2000.0/30.0)*bill_period){  
            surcharge=0;  
    }else if(bill<=(5000.0/30.0)*bill_period){  
            surcharge=bill*(5.0/100.0);  
    }else{  
            surcharge=bill*(10.0/100.0);  
    }  

    bill= bill + surcharge;  

    printf("\nYour Electricity Bill : %.2lf\n",bill);  

    return 0;

}