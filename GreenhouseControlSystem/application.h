/*
 * application.h
 *
 * Created: 06/05/2022 17.34.15
 *  Author: Deniss
 */ 


#pragma once

#include "ATMEGA_FreeRTOS.h"
#include "event_groups.h"


/**
 * Create the Application task
 */
void application_task_create(void);

void application_task_run(void); 