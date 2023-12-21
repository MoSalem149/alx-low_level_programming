        ht->array[index] = new_node;

        sorted_list(ht, new_node);

        return (1);

}

/**

 * shash_table_get - function to retrieve value associeted with key

 * @ht: pointer to hash table

 * @key: key to retrive value

 *

 * Return: value or NULL if key does not exit.

 */

char *shash_table_get(const shash_table_t *ht, const char *key)

{

        unsigned long int index = 0;

        shash_node_t  *bucket;


        if (!ht || !key || !*key)

                return (NULL);

        index = key_index((const unsigned char *)key, ht->size);

        bucket = ht->array[index];

        while (bucket)

        {

                if (!strcmp(key, bucket->key))

                        return (bucket->value);

                bucket = bucket->next;

        }

        return (NULL);

}


/**

 * shash_table_print - function to print the key:value from ht

 * @ht: pointer to hash table

 *

 */

void shash_table_print(const shash_table_t *ht)

{

        shash_node_t *bucket;

        int not_fin = 0;


        if (!ht)

                return;

        bucket = ht->shead;

        printf("{");

        while (bucket)

        {

                if (not_fin)

                        printf(", ");

                printf("'%s': '%s'", bucket->key, bucket->value);

                not_fin = 1;

                bucket = bucket->snext;

        }

        printf("}\n");

}

/**

 * shash_table_print_rev - function to print the key:value from ht in reverse

 * @ht: pointer to hash table

 *

 */

void shash_table_print_rev(const shash_table_t *ht)

{

        shash_node_t *bucket;

        int not_fin = 0;


        if (!ht)

                return;

        bucket = ht->stail;

        printf("{");

        while (bucket)

        {

                if (not_fin)

                        printf(", ");

                printf("'%s': '%s'", bucket->key, bucket->value);

                not_fin = 1;

                bucket = bucket->sprev;

        }

        printf("}\n");

}

/**

 * shash_table_delete - free hash table and all nodes

 * @ht: pointer to hash table

 *

 */

void shash_table_delete(shash_table_t *ht)

{

        shash_node_t *bucket, *aux_free;

        unsigned long int i = 0;


        if (!ht)

                return;


        for (i = 0; i < ht->size; i++)

        {

                bucket = ht->array[i];

                while (bucket)

                {

                        aux_free = bucket;

                        bucket = bucket->next;

                        if (aux_free->key)

                                free(aux_free->key);

                        if (aux_free->value)

                                free(aux_free->value);

                        free(aux_free);

                }

        }

        free(ht->array);

        free(ht);

}


