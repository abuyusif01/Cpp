#include<iostream>

struct Process
{
    int ccode;     // process name
    int duration;      // burst time
    int arrival_time;   //process arrival time
};
 
void find_waiting_time(int processes[], int size, int burst_time[], int waiting_time[])
{
    // initially waiting_time =0
    waiting_time[0] = 0;
 
    // summation of waiting time
    for (int i = 1; i < size ; i++)
    {
        waiting_time[i] =  burst_time[i-1] + waiting_time[i-1];
    }
}
 
void find_turn_around_time( int processes[], int size, int burst_time[], int waiting_time[], int turnaround_time[])
{
    for (int i = 0; i < size ; i++)
    {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
    }
}
 

int main()
{
    Process proc[] = {{2201, 3, 1}, {3401, 2, 2}, {1103, 1, 3}}; //fcfs no need priority
    size_t size = sizeof proc / sizeof proc[0];
    int burst_time[size];
    int process_id[size];
    int waiting_time[size];
    int turnaround_time[size];

    for (int i=0; i< size; i++) // making it easy to implement the algorithm. (copying from struct to array)
    {
        burst_time[i] = proc[i].duration;
        process_id[i] = proc[i].ccode;
    }
    int total_wt = 0, total_tat = 0;

    find_waiting_time(process_id, size, burst_time, waiting_time);
    find_turn_around_time(process_id, size, burst_time, waiting_time, turnaround_time);
    std::cout << "courses  "<< " class time "<< " Waiting time  " << " Turn around time\n";

    for (int i = 0; i < size; i++)
    {
        total_wt = total_wt + waiting_time[i];
        total_tat = total_tat + turnaround_time[i];
        std::cout << "CSC " << process_id[i] << "\t" << burst_time[i] <<"\t    "<< waiting_time[i] <<"\t\t  " << turnaround_time[i] <<std::endl;
    }
 
    std::cout << "\n\nAverage waiting time = "<< (float)total_wt / (float)size;
    std::cout << "\nAverage turn around time = "<< (float)total_tat / (float)size;
    
    return 0;
}