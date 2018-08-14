#ifndef __LED_KEY_H
#define __LED_KEY_H





/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "delay.h"
#include "gpio_conf.h"


//*****************************��BCD������ַ�**********************************
#define ZERO  0x3F
#define ONE   0x06
#define TWO   0x5B
#define THREE 0x4F
#define FOUR  0x66
#define FIVE  0x6D
#define SIX   0x7D
#define SEVEN 0x07
#define EIGHT 0x7F
#define NINE  0x6F

#define BIG_U       0X3E
#define LITTLE_N    0X54
#define BIG_P       0x73
#define BIG_F       0x71
#define MINUS       0x40
#define NONE        0x00
#define BIG_E       0x79
#define LITTLE_O    0x5C
//******************************************************************************

/* CH451��CH452�ĳ��������� */
#define CH452_NOP	0x0000			    // �ղ���
#define CH452_RESET     0x0201			    // ��λ
#define CH452_LEVEL	0x0100			    // ���ع���ֵ,������7λ����
#define CH452_CLR_BIT	0x0180			    // ��λ��0,������6λ����
#define CH452_SET_BIT	0x01C0			    // ��λ��1,������6λ����
#define CH452_SLEEP	0x0202			    // ����˯��״̬
#define CH452_LEFTMOV   0x0300		            // �����ƶ���ʽ-����
#define CH452_LEFTCYC   0x0301		            // �����ƶ���ʽ-��ѭ��
#define CH452_RIGHTMOV  0x0302		            // �����ƶ���ʽ-����
#define CH452_RIGHTCYC  0x0303		            // �����ƶ���ʽ-��ѭ��	
#define CH452_SELF_BCD	0x0380			    // �Զ���BCD��,������7λ����
#define CH452_SYSOFF    0x0400			    // �ر���ʾ���رռ���
#define CH452_SYSON1    0x0401			    // ������ʾ
#define CH452_SYSON2    0x0403			    // ������ʾ������
#define CH452_SYSON2W   0x0423			    // ������ʾ������, ����2�߽ӿ�
#define CH452_NO_BCD    0x0500			    // ����Ĭ����ʾ��ʽ,������3λɨ�輫��
#define CH452_BCD       0x0580			    // ����BCD���뷽ʽ,������3λɨ�輫��
#define CH452_TWINKLE   0x0600		            // ������˸����,������8λ����
#define CH452_GET_KEY	0x0700			    // ��ȡ����,���ذ�������
#define CH452_DIG0      0x0800			    // �����λ0��ʾ,������8λ����
#define CH452_DIG1      0x0900		            // �����λ1��ʾ,������8λ����
#define CH452_DIG2      0x0a00		            // �����λ2��ʾ,������8λ����
#define CH452_DIG3      0x0b00		            // �����λ3��ʾ,������8λ����
#define CH452_DIG4      0x0c00		            // �����λ4��ʾ,������8λ����
#define CH452_DIG5      0x0d00			    // �����λ5��ʾ,������8λ����
#define CH452_DIG6      0x0e00                      // �����λ6��ʾ,������8λ����
#define CH452_DIG7      0x0f00		            // �����λ7��ʾ,������8λ����

// BCD���뷽ʽ�µ������ַ�
#define		CH452_BCD_SPACE		0x10
#define		CH452_BCD_PLUS		0x11
#define		CH452_BCD_MINUS		0x12
#define		CH452_BCD_EQU		0x13
#define		CH452_BCD_LEFT		0x14
#define		CH452_BCD_RIGHT		0x15
#define		CH452_BCD_UNDER		0x16
#define		CH452_BCD_CH_H		0x17
#define		CH452_BCD_CH_L		0x18
#define		CH452_BCD_CH_P		0x19
#define		CH452_BCD_DOT		0x1A
#define		CH452_BCD_SELF		0x1E
#define		CH452_BCD_TEST		0x88
#define		CH452_BCD_DOT_X		0x80

// ��Ч��������
#define		CH452_KEY_MIN		0x40
#define		CH452_KEY_MAX		0x7F


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void led_key_config(void);
void led_write(u16 cmd);
u8 key_read(void);


#endif