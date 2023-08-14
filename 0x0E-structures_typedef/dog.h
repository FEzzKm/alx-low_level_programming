#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_tp -Typedef for struct dog
*/
typedef struct dog dog_tp;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_tp *new_dog(char *name, float age, char *owner);
void free_dog(dog_tp *d);

#endif 
