#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include "MLX42/MLX42.h"
#define WIDTH 720
#define HEIGHT 480

void my_keyhook(mlx_key_data_t keydata, void* param)
{
    // Si PRESIONAMOS la tecla 'J', imprime "Hello".
    if (keydata.key == MLX_KEY_J && keydata.action == MLX_PRESS)
        puts("Hello");

    // Si LIBERAMOS la tecla 'K', imprime "World".
    if (keydata.key == MLX_KEY_K && keydata.action == MLX_RELEASE)
        puts("World");

    // Si MANTENEMOS PRESIONADA la tecla 'L', imprime "!".
    if (keydata.key == MLX_KEY_L && keydata.action == MLX_REPEAT)
        puts("!");
}

int32_t main(void)
{
    mlx_t* mlx;

    if (!(mlx = mlx_init(WIDTH, HEIGHT, "MLX42", true)))
        return (EXIT_FAILURE);

    mlx_key_hook(mlx, &my_keyhook, NULL);
    mlx_loop(mlx);
    mlx_terminate(mlx);
    return (EXIT_SUCCESS);
}

