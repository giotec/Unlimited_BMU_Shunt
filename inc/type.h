/*
 * type.h
 *
 *  Created on: 19 Jul 2015
 *      Author: Stuff
 */

#ifndef TYPE_H_
#define TYPE_H_

#ifndef NULL
#define NULL    ((void *)0)
#endif

#ifndef FALSE
#define FALSE   (0)
#endif

#ifndef TRUE
#define TRUE    (1)
#endif


typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;
typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;

#endif /* TYPE_H_ */
