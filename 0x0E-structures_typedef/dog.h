#ifndef GOD_H
#define GOD_H

/**
 * struct dog - a dog's basic info
 * @name: first member
 * @age: Secondary member
 * @owner: Third member
 *
 * Description: Longer Description
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

/**
 * god_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_void(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
