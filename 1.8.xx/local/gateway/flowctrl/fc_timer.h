/******************************************************************************

                  版权所有 (C), 2001-2011, 上海寰创通信股份有限公司

 ******************************************************************************
  文 件 名   : fc_timer.h
  版 本 号   : 初稿
  作    者   : Zhong Huaqing
  生成日期   : 2012年8月10日 星期五
  最近修改   :
  功能描述   : flow_ctrl.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年8月10日 星期五
    作    者   : Zhong Huaqing
    修改内容   : 创建文件

******************************************************************************/

#ifndef __FC_TIMER_H__
#define __FC_TIMER_H__


/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部变量说明                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 内部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 全局变量                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 模块级变量                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 基础类型定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/
 
/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/
#define FC_AGINE_TIME_DEF_VALUE (10 * HZ) /*单位:秒*/

 /*----------------------------------------------*
 * 宏操作                                       *
 *----------------------------------------------*/



 
/*----------------------------------------------*
 * 枚举定义                                       *
 *----------------------------------------------*/


/*----------------------------------------------*
 * 扩展类型定义                                     *
 *----------------------------------------------*/


/*----------------------------------------------*
 * 结构定义                                       *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 导出函数原型说明                             *
 *----------------------------------------------*/
AP_ERROR_CODE_E fc_queue_timer_init(FC_QUEUE_T *pstQ);
AP_ERROR_CODE_E fc_queue_tx_timer_restart(FC_QUEUE_T *pstQ, UINT32 uiTickDelay);
AP_ERROR_CODE_E fc_queue_aging_timer_restart(FC_QUEUE_T *pstQ, UINT32 uiTickDelay);
AP_ERROR_CODE_E fc_queue_tx_timer_stop(FC_QUEUE_T *pstQ);
AP_ERROR_CODE_E fc_queue_aging_timer_stop(FC_QUEUE_T *pstQ);
AP_ERROR_CODE_E fc_queue_timer_stop(FC_QUEUE_T *pstQ);

AP_ERROR_CODE_E fc_auto_rate_timer_init(void);
AP_ERROR_CODE_E fc_auto_rate_timer_restart(UINT32 uiTickDelay);
AP_ERROR_CODE_E fc_auto_rate_timer_stop(void);

#endif /* __FC_TIMER_H__ */

