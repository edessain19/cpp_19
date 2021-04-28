#include <string>
#include <unistd.h>
#include <iostream>

typedef struct	Data
{
	std::string s1;
	int n;
	std::string s2;
}				Data;

void	show_data_pre(Data *data)
{
	std::cout << "Pre-serialize: " << data->s1 << ", " << data->n << ", " << data->s2 << std::endl;
}

void	show_data_post(Data *data)
{
	std::cout << "Post-serialize: " << data->s1 << ", " << data->n << ", " << data->s2 << std::endl;
}

std::string createString()
{
    static char str[9];

	usleep(1);
    for (int i = 0; i < 8; i++)
        str[i] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 62];
    return (static_cast<std::string>(str));
}

void *serialize(void)
{
    Data *raw;
    raw = new Data;
    raw->s1 = createString();
    raw->n = rand();
    raw->s2 = createString();
    show_data_pre(raw);
    return (static_cast<void *>(raw));
}

Data *deserialize(void *raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    srand(time(NULL));
    void *raw = serialize();
    std::cout << raw << std::endl;
    Data *data = deserialize(raw);
    show_data_post(data);
    delete data;
    return (0);
}