import matplotlib.pyplot as plt


input = [10, 100, 1000, 10000, 100000, 1000000]

#Change your timings here
ascending_time = []
descending_time = []
random_time = []

plt.plot(input,ascending_time , marker='o', color='blue', label='Ascending')
plt.plot(input, descending_time, marker='o', color='deeppink', label='Descending')
plt.plot(input,random_time , marker='o', color='purple', label='Random')

plt.title("Sorting Algorithms")
plt.xlabel("Number of elements (N)")
plt.ylabel("Execution time (s)")
plt.legend()
plt.grid(True)
plt.xscale("log")
plt.xticks(input, input) 
plt.savefig("todos_algoritmos.png", dpi=300)
plt.show()
