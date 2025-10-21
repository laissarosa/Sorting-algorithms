import matplotlib.pyplot as plt


entradas = [10, 100, 1000, 10000, 100000, 1000000]

# MUDA SEUS TEMPOS AQUI
tempos_crescente = [0.000, 0.000, 0.000, 0.063000, 6.233000,  513.062]
tempos_decrescente = [0.000, 0.000, 0.0, 0.079000,6.311000 ,448.444 ]
tempos_aleatorio = [0.0, 0.0, 0.0, 0.0570, 4.078,  572.15300]

#bubble
tempos_crescente_bubble = [0.000, 0.000, 0.000, 0.082, 6.316, 469.369]
tempos_decrescente_bubble = [0.000, 0.000, 0.004000 ,0.151000 ,19.988000  , 1293.12900 ]
tempos_aleatorio_bubble = [0.0,0.0,0.0110, 0.16, 33.682, 3056.861]
#selection
tempos_crescente_selection = [0.000, 0.000, 0.000, 0.063000, 6.233000, 513.062]
tempos_decrescente_selection = [0.000, 0.000, 0.0, 0.079000,6.311000 ,448.444 ]
tempos_aleatorio_selection = [0.0, 0.0,0.0, 0.0570, 4.078,572.1530]
#shell
tempos_crescente_shell = [0.000, 0.000, 0.000, 0.0, 0.001, 0.04]
tempos_decrescente_shell = [0.0, 0.0, 0.0, 0.0, 0.008, 0.036]
tempos_aleatorio_shell = [0.0, 0.0, 0.0, 0.002,0.019, 0.2770]

#insertion
tempos_crescente_insertion = [0.000, 0.000, 0.000, 0.0, 0.00, 0.0]
tempos_decrescente_insertion = [0.0, 0.0, 0.02, 0.06, 5.36, 862.252]
tempos_aleatorio_insertion = [0.0,0.0,0.0, 0.048, 2.4680, 541.947]

#merge 
tempos_crescente_merge = [0.0, 0.0, 0.0, 0.0, 0.018,  0.14]
tempos_decrescente_merge = [0.0, 0.0, 0.0, 0.004, 0.01, 0.143]
tempos_aleatorio_merge = [0.0, 0.0, 0.0, 0.004, 0.028,  0.241]

plt.figure(figsize=(8,6))

#AQUI VC ESCOLHE AS CORES
#plt.plot(entradas, tempos_crescente_selection, marker='o', color='deeppink', label='Selection - Crescente')
#plt.plot(entradas, tempos_crescente_bubble, marker='o', color='orange', label='Bubble - Crescente')
#plt.plot(entradas, tempos_aleatorio_bubble, marker='o', color='deeppink', label='Bubble - Aleatório')
#plt.plot(entradas, tempos_crescente_shell, marker='o', color='blue', label='Shell - Crescente')
#plt.plot(entradas, tempos_crescente_insertion, marker='o', color='green', label='Insertion - Crescente')
plt.plot(entradas, tempos_crescente_merge, marker='o', color='blue', label='Crescente')
plt.plot(entradas, tempos_aleatorio_merge, marker='o', color='deeppink', label='Aleatório')
plt.plot(entradas, tempos_decrescente_merge, marker='o', color='purple', label='Decrescente')


plt.title("Tempos de execução - Merge Sort")
plt.xlabel("Número de elementos (N)")
plt.ylabel("Tempo de execução (s)")
plt.legend()
plt.grid(True)
plt.xscale("log")
plt.xticks(entradas, entradas) 
plt.savefig("todos_algoritmos.png", dpi=300)
plt.show()
