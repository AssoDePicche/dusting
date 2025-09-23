#pragma once
#ifndef BOX_H
#define BOX_H

#define MAX_HEIGHT 41

typedef struct
{
	unsigned int length, width, height;
} box;

int get_volume(box box);

int is_lower_than_max_height(box box);

#endif
