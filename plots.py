import matplotlib.pyplot as plt
import numpy as np

# Data from benchmark
compilation_options = ["-O0", "-O1", "-O2", "-O3", "-Ofast"]
time = [9.086, 1.776, 0.900, 0.862, 0.834]
cycles = [37910229773, 7489325981, 3700870817, 3553918859, 3465929387]
instructions = [125999059889, 14029885794, 9007852631, 9071584658, 8984289901]
cache_references = [1542097366, 1673460041, 1499107388, 1494921452, 1506828545]
cache_misses = [45832064, 21885410, 37410584, 37374643, 36658344]
branches = [13007915322, 1006632994, 999930253, 1005212048, 999063608]
branch_misses = [1249513, 1092004, 1046797, 1044127, 1032847]

# Plot data
plt.figure(figsize=(8, 6))
plt.bar(compilation_options, time, color = 'b')
plt.ylabel('Time (s)')
plt.savefig('time.png')
plt.close()

plt.figure(figsize=(8, 6))
plt.bar(compilation_options, cycles, color = 'r')
plt.ylabel('Cycles')
plt.savefig('cycles.png')
plt.close()

plt.figure(figsize=(8, 6))
plt.bar(compilation_options, instructions, color = 'g')
plt.ylabel('Instructions')
plt.savefig('instructions.png')
plt.close()

plt.figure(figsize=(8, 6))
plt.bar(compilation_options, cache_references, color = 'c')
plt.ylabel('Cache References')
plt.savefig('cache_references.png')
plt.close()

plt.figure(figsize=(8, 6))
plt.bar(compilation_options, cache_misses, color = 'm')
plt.ylabel('Cache Misses')
plt.savefig('cache_misses.png')
plt.close()

plt.figure(figsize=(8, 6))
plt.bar(compilation_options, branches, color = 'y')
plt.ylabel('Branches')
plt.savefig('branches.png')
plt.close()

plt.figure(figsize=(8, 6))
plt.bar(compilation_options, branch_misses, color = 'k')
plt.ylabel('Branch Misses')
plt.savefig('branch_misses.png')
plt.close()
