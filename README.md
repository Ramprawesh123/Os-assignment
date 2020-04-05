# Os-assignment
Question:Consider a scheduling approach which is non pre-emptive similar to shortest job next in
nature. The priority of each job is dependent on its estimated run time, and also the amount of
time it has spent waiting. Jobs gain higher priority the longer they wait, which prevents
indefinite postponement. The jobs that have spent a long time waiting compete against those
estimated to have short run times. The priority can be computed as :
Priority = 1+ Waiting time / Estimated run time
Write a program to implement such an algorithm.

Algorithms are either non-preemptive or preemptive. 
Non-preemptive algorithms are designed so that once a process enters the running state, it cannot be preempted 
until it completes its allotted time. 
First come first serve scheduling algorithm is in which the process which arrives first, gets executed first, or we can say that the process which requests the CPU first, gets the CPU allocated first.
First Come First Serve, is just like FIFO(First in First out) Queue data structure, where the data element which is added to the queue first, is the one who leaves the queue first. 
It's easy to understand and implement programmatically. A perfect real life example of FCFS scheduling is buying tickets at ticket counter. 
• Jobs are executed on first come, first serve basis.
• Process that come first will execute first. 
• Processes with short burst time wait longer behind long Processes. 
• It is a non-preemptive scheduling algorithm. 
• Easy to understand and implement. 
• Its implementation is based on FIFO queue. 
• Poor in performance as average wait time is high. 
