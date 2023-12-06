import random

def fitness_function(x):
    return x**2

def generate_population(size):
    return [random.uniform(-10, 10) for _ in range(size)]

def crossover(parent1, parent2):
    return (parent1 + parent2) / 2

def mutate(child):
    mutation_rate = 0.1
    return child + random.uniform(-mutation_rate, mutation_rate)

def genetic_algorithm(population_size, generations):
    population = generate_population(population_size)

    for generation in range(generations):
        fitness_scores = [fitness_function(x) for x in population]

        parents = [population[i] for i in range(population_size) if random.random() < fitness_scores[i]/sum(fitness_scores)]


        next_generation = []

        while len(next_generation) < population_size:
            parent1 = random.choice(parents)
            parent2 = random.choice(parents)
            child = crossover(parent1, parent2)
            child = mutate(child)
            next_generation.append(child)

        population = next_generation

    best_solution = max(population, key=fitness_function)
    return best_solution, fitness_function(best_solution)

best_solution, max_fitness = genetic_algorithm(population_size=50, generations=100)
print(f"Best solution: x = {best_solution}, max fitness: {max_fitness}")
        