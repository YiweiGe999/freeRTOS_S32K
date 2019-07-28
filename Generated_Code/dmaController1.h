/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : dmaController1.h
**     Project     : freeRTOS_s32K
**     Processor   : S32K116_48
**     Component   : edma
**     Version     : Component SDK_S32K1xx_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32K1xx_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-07-27, 16:45, # CodeGen: 6
**     Contents    :
**         EDMA_DRV_Init                              - status_t EDMA_DRV_Init(edma_state_t *edmaState, const edma_user_config_t...
**         EDMA_DRV_Deinit                            - status_t EDMA_DRV_Deinit(void);
**         EDMA_DRV_ChannelInit                       - status_t EDMA_DRV_ChannelInit(edma_chn_state_t * edmaChannelState,const...
**         EDMA_DRV_ReleaseChannel                    - status_t EDMA_DRV_ReleaseChannel(uint8_t channel);
**         EDMA_DRV_StartChannel                      - status_t EDMA_DRV_StartChannel(uint8_t channel);
**         EDMA_DRV_StopChannel                       - status_t EDMA_DRV_StopChannel(uint8_t channel);
**         EDMA_DRV_InstallCallback                   - status_t EDMA_DRV_InstallCallback(uint8_t channel,edma_callback_t...
**         EDMA_DRV_GetChannelStatus                  - edma_chn_status_t EDMA_DRV_GetChannelStatus(uint8_t channel);
**         EDMA_DRV_PushConfigToReg                   - void EDMA_DRV_PushConfigToReg(uint8_t channel,edma_transfer_config_t * config);
**         EDMA_DRV_PushConfigToSTCD                  - void EDMA_DRV_PushConfigToSTCD(uint8_t channel,edma_transfer_config_t *...
**         EDMA_DRV_ConfigSingleBlockTransfer         - status_t EDMA_DRV_ConfigSingleBlockTransfer(uint8_t...
**         EDMA_DRV_ConfigLoopTransfer                - status_t EDMA_DRV_ConfigLoopTransfer(uint8_t channel,edma_transfer_config_t *...
**         EDMA_DRV_ConfigScatterGatherTransfer       - status_t EDMA_DRV_ConfigScatterGatherTransfer(uint8_t...
**         EDMA_DRV_ConfigMultiBlockTransfer          - status_t EDMA_DRV_ConfigMultiBlockTransfer(uint8_t...
**         EDMA_DRV_CancelTransfer                    - void EDMA_DRV_CancelTransfer(bool error);
**         EDMA_DRV_SetChannelRequestAndTrigger       - status_t EDMA_DRV_SetChannelRequestAndTrigger(uint8_t virtualChannel, uint8_t...
**         EDMA_DRV_ClearTCD                          - void EDMA_DRV_ClearTCD(uint8_t channel);
**         EDMA_DRV_SetSrcAddr                        - void EDMA_DRV_SetSrcAddr(uint8_t channel, uint32_t address);
**         EDMA_DRV_SetSrcOffset                      - void EDMA_DRV_SetSrcOffset(uint8_t channel, int16_t offset);
**         EDMA_DRV_SetSrcReadChunkSize               - void EDMA_DRV_SetSrcReadChunkSize(uint8_t channel, edma_transfer_size_t size);
**         EDMA_DRV_SetDestAddr                       - void EDMA_DRV_SetDestAddr(uint8_t channel, uint32_t address);
**         EDMA_DRV_SetDestOffset                     - void EDMA_DRV_SetDestOffset(uint8_t channel, int16_t offset);
**         EDMA_DRV_SetDestWriteChunkSize             - void EDMA_DRV_SetDestWriteChunkSize(uint8_t channel, edma_transfer_size_t size);
**         EDMA_DRV_SetMinorLoopBlockSize             - void EDMA_DRV_SetMinorLoopBlockSize(uint8_t channel, uint32_t nbytes);
**         EDMA_DRV_SetMajorLoopIterationCount        - void EDMA_DRV_SetMajorLoopIterationCount(uint8_t channel, uint32_t...
**         EDMA_DRV_GetRemainingMajorIterationsCount  - uint32_t EDMA_DRV_GetRemainingMajorIterationsCount(uint8_t channel);
**         EDMA_DRV_SetScatterGatherLink              - void EDMA_DRV_SetScatterGatherLink(uint8_t channel, uint32_t nextTCDAddr);
**         EDMA_DRV_DisableRequestsOnTransferComplete - void EDMA_DRV_DisableRequestsOnTransferComplete(uint8_t channel, bool disable);
**         EDMA_DRV_SetSrcLastAddrAdjustment          - void EDMA_DRV_SetSrcLastAddrAdjustment(uint8_t channel, int32_t adjust);
**         EDMA_DRV_SetDestLastAddrAdjustment         - void EDMA_DRV_SetDestLastAddrAdjustment(uint8_t channel, int32_t adjust);
**         EDMA_DRV_ConfigureInterrupt                - void EDMA_DRV_ConfigureInterrupt(uint8_t channel, edma_channel_interrupt_t...
**         EDMA_DRV_TriggerSwRequest                  - void EDMA_DRV_TriggerSwRequest(uint8_t channel);
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file dmaController1.h
** @version 01.00
*/         
/*!
**  @addtogroup dmaController1_module dmaController1 module documentation
**  @{
*/         

/* MODULE dmaController1
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The macros are defined to be used by application code.
 */

#ifndef dmaController1_H
#define dmaController1_H

/* Include inherited beans */
#include "clockMan1.h"
#include "Cpu.h"

/*! @brief Physical channel number for channel configuration #0 */
#define EDMA_CHN0_NUMBER   0U

/*! @brief The total number of configured channels */
#define EDMA_CONFIGURED_CHANNELS_COUNT   1U

/*! @brief Driver state structure which holds driver runtime data */
extern edma_state_t dmaController1_State;

/*! @brief eDma channel state structure 0. Holds channel runtime data */
extern edma_chn_state_t dmaController1Chn0_State;

/*! @brief Array of channel state structures */
extern edma_chn_state_t * const edmaChnStateArray[EDMA_CONFIGURED_CHANNELS_COUNT];

/*! @brief eDma channel configuration 0 */
extern edma_channel_config_t dmaController1Chn0_Config;
    
/*! @brief Array of channel configuration structures */
extern const edma_channel_config_t * const edmaChnConfigArray[EDMA_CONFIGURED_CHANNELS_COUNT];

/*! @brief Configuration declaration */
extern const edma_user_config_t dmaController1_InitConfig0;


#endif  /* ifndef dmaController1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/

