#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Structure containing dog's infos
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
