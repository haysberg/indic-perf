import matplotlib.pyplot as plt
import numpy as np

# Data from benchmark
compilation_options = ["-O0", "-O1", "-O2", "-O3", "-Ofast"]
time = [0.180, 0.116, 0.035, 0.036, 0.034]
cycles = [660327076, 452715407, 101177075, 103344187, 106053602]
instructions = [2205911631, 354387434, 504215978, 504200660, 504634741]
cache_references = [1168139, 1043110, 1052875, 1084283, 1261049]
cache_misses = [60585, 48185, 53860, 50950, 85102]
branches = [301174385, 50943377, 100916738, 100913418, 101021175]
branch_misses = [106016, 27883, 115539, 114625, 118955]

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
