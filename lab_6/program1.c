#include <stdio.h>

struct Process {
    int pid;
    int burst_time;
    int arrival_time;
    int waiting_time;
    int turnaround_time;
};

int main() {
    int n, i, j;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process p[n];
    for (i = 0; i < n; i++) {
        printf("Enter the burst time for process %d: ", i+1);
        scanf("%d", &p[i].burst_time);
        p[i].pid = i+1;
        p[i].arrival_time = 0; // Assume all processes arrive at time 0 for FCFS
    }

    // Sort the processes by arrival time
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (p[j].arrival_time > p[j+1].arrival_time) {
                struct Process temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    // Calculate waiting time and turnaround time
    p[0].waiting_time = 0;
    p[0].turnaround_time = p[0].burst_time;
    for (i = 1; i < n; i++) {
        p[i].waiting_time = p[i-1].waiting_time + p[i-1].burst_time;
        p[i].turnaround_time = p[i].waiting_time + p[i].burst_time;
    }

    // Print the schedule
    printf("Process ID\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].pid, p[i].burst_time, p[i].arrival_time, p[i].waiting_time, p[i].turnaround_time);
    }

    return 0;
}