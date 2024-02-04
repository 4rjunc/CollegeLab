import random 

def create_population(population_size, string_len):
    return ["".join(random.choice("01") for _ in range(string_len)) for _ in range(population_size)]

def fitness(x , target):
    return sum( 1 for a, b in zip(x, target) if a==b)

def crossover(parent1 , parent2):
    split_size = random.randint(1, len(parent1) - 1)
    child1 = parent1[:split_size] + parent2[split_size:]
    child2 = parent2[:split_size] + parent1[split_size:]
    return child1, child2

def mutation(individual, mutation_rate):
    mutated_individual = "".join(
        bit if random.random() > mutation_rate else random.choice("01")
        for bit in individual
    )
    return mutated_individual

def genetic_algoritm(target, population_size, generations, mutation_rate):
    population = create_population(population_size, len(target))

    for generation in range(generations):
        population = sorted(population, key=lambda x : fitness(x,target), reverse=True)
        if fitness(population[0],target) == len(target):
            print(f"Individual Found at generation {generation + 1}")
            break
        
        new_population = population[:2]

        while len(new_population) < population_size:
            parent1, parent2 = random.choices(population[:10], k=2)
            child1, child2 = crossover(parent1, parent2)
            child1 = mutation(child1, mutation_rate)
            child2 = mutation(child2, mutation_rate)

            new_population.extend([child1, child2])
        
    best_individual = max(new_population, key=lambda x : fitness(x, target))
    print(f"Best Individual : {best_individual}\nFitness : {fitness(best_individual,target)}")

if __name__ == "__main__":
    target = "1010101010101010"
    genetic_algoritm(target, population_size=100, generations=1000, mutation_rate=0.1)