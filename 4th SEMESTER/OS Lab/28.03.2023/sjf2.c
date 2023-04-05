//SJF with different Arrival time 
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i, j, time = 0, sum_wait_time = 0, sum_turnaround_time = 0;
    float avg_wait_time, avg_turnaround_time;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], waiting_time[n], turnaround_time[n];

    for (i = 0; i < n; i++) {
        printf("Enter the arrival time and burst time of process %d: ", i+1);
        scanf("%d%d", &arrival_time[i], &burst_time[i]);
    }
    for (i = 0; i < n-1; i++) {
        int shortest = i;
        for (j = i+1; j < n; j++) {
            if (burst_time[j] < burst_time[shortest]) {
                shortest = j;
            }
        }
        swap(&burst_time[i], &burst_time[shortest]);
        swap(&arrival_time[i], &arrival_time[shortest]);
    }
    for (i = 0; i < n; i++) {
        waiting_time[i] = time - arrival_time[i];
        if (waiting_time[i] < 0) {
            waiting_time[i] = 0;
            time = arrival_time[i];
        }
        turnaround_time[i] = waiting_time[i] + burst_time[i];
        sum_wait_time += waiting_time[i];
        sum_turnaround_time += turnaround_time[i];
        time += burst_time[i];
    }
    avg_wait_time = (float) sum_wait_time / n;
    avg_turnaround_time = (float) sum_turnaround_time / n;
    printf("\nProcess\tArrival time\tBurst time\tWaiting time\tTurnaround time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i+1, arrival_time[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }
    printf("Average waiting time: %.2f\n", avg_wait_time);
    printf("Average turnaround time: %.2f\n", avg_turnaround_time);
    return 0;
}