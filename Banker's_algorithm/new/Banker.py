import numpy as np

processes = int(input('Number of processes? '))
resources = int(input('Number of resources? '))


#available sources
available_resources = [int(x) for x in input('Available resources? ').split(' ')]

#current allocated
currently_allocated =  \
    np.array(
    [[int(x) for x in input('Currently allocated for process ' + str(i + 1) + '? ').split(' ')] for i in
     range(processes)])

#max demand
max_demand = np.array([[int(x) for x in input('Maximum demand from process ' + str(i + 1) + '? ').split(' ')] for i in
                       range(processes)])

#total available to be allocated
total_available = available_resources - np.sum(currently_allocated, axis=0)



# An array with n_processes 1's to indicate if process is yet to run
running = np.ones(processes)


while np.count_nonzero(running) > 0:
    at_least_one_allocated = False
    for p in range(processes):
        if running[p]:
            if all(i >= 0 for i in total_available - (max_demand[p] - currently_allocated[p])):
                at_least_one_allocated = True
                print(str(p) + ' is running')
                running[p] = 0
                total_available += currently_allocated[p]
    if not at_least_one_allocated:

        print('Unsafe')
        exit()

print('Safe');




