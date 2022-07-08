stack_base = (unsigned)&CSTACK$$Base;
stack_limit = (unsigned)&CSTACK$$Limit;
stack_size = (unsigned)&CSTACK$$Limit - (unsigned)&CSTACK$$Base;

Int main(void)
while(1)
{

     func1();
     func2();
     func3();
       :
       :

    stack_pt = __get_SP();
    stack_use = (stack_limit - stack_pt);
    stack_Percent = (uint32_t)(stack_use*100u / stack_size);
    
     if(stack_Percent > max_stackuse){
       max_stackuse = stack_Percent;
    }    
}
