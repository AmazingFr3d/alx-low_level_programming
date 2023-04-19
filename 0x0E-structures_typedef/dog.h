#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - The structure name
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Hold the properties of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
