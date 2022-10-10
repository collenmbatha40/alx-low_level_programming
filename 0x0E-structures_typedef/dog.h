#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure named dog
 * @name: char pointer to dog name
 * @age: float defining dog's age
 * @owner: char pointer to dog owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
