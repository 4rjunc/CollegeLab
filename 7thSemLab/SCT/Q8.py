import numpy as np

def objective_function(population):
    return population**2

population_size = 50
generations = 100
mutation_rate = 0.2

population = np.random.uniform(-10,10, size=population_size)

for generation in range(generations):
    fitness = objective_function(population)

    sorted_indices = np.argsort(fitness)[::-1]
    selected_population = population[sorted_indices[:population_size]]

    crossover_population = np.random.choice(selected_population, size=population_size) #crossover
    mutation_mask = np.random.rand(population_size) < mutation_rate #setting up mutation
    mutation_population = np.random.uniform(-1,1, size=population_size) 
    crossover_population[mutation_mask] += mutation_population[mutation_mask]
    population = crossover_population

best_individual_index = np.argmax(objective_function(population))
best_x = population[best_individual_index]
print(f"Optimal X : {best_x}")
print(f"Optimla f(x): {objective_function(best_x)}")
