#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <memory.h>
#include "MLX42/MLX42.h"
#define WIDTH 5120
#define HEIGHT 2880

static void error(void)
{
    puts(mlx_strerror(mlx_errno));
    exit(EXIT_FAILURE);
}

int32_t main(void)
{
    // Iniciar MLX
    mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "Test", true);
    if (!mlx)
        error();

    // Crear una nueva imagen
    mlx_image_t* img = mlx_new_image(mlx, 512, 512);
    if (!img)
        error();

    // Establecer cada píxel como blanco
    memset(img->pixels, 255, img->width * img->height * sizeof(int32_t));

    // Mostrar una instancia de la imagen
    if (mlx_image_to_window(mlx, img, 0, 0) < 0)
        error();

    mlx_loop(mlx);

    // Opcional, mlx_delete_image limpiará cualquier resto, esto es solo para demostración.
    mlx_delete_image(mlx, img);
    mlx_terminate(mlx);
    return (EXIT_SUCCESS);
}

