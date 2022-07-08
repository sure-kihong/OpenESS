uint32_t start_time, end_time;      // start and stop flag
uint32_t max_runtime, Diff_time;  //max 시간, 시간차이

Int main(void)
while(1)
{
    start_timer();
    start_time = get_timer();

     func1();
     func2();
     func3();
       :
       :
   end_time = get_timer();
   Diff_time = end_time - start_time;
   stop_timer();  
    if(Diff_time > max_runtime){
       max_runtime = Diff_time;
    }
}