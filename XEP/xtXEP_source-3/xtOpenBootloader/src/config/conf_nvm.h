/**
 * \file
 *
 * \brief User board configuration template
 *
 */

#ifndef CONF_NVM_H
#define CONF_NVM_H


#define MIN_NUMBER_OF_PAGES_TO_ERASE 16
#define EPA_FARG_0_1_16_PAGES	2
#define EPA_FARG_0_1_8_PAGES	1
#define EPA_0_1_CONFIGRATION	EPA_FARG_0_1_16_PAGES
#define APP_FIRST_PAGE			(128) // start at offset 0x10000 in flash start 
#define CAL_NMBR_OF_PAGES		(128*2) // 2x16 kb +96 kb unused
#define APP_START_ADDRESS		(IFLASH_ADDR + IFLASH_PAGE_SIZE*APP_FIRST_PAGE)
#define APP_LAST_PAGE			(IFLASH_NB_OF_PAGES - CAL_NMBR_OF_PAGES - 1)
#define APP_LAST_PAGE_UNLOCK	(IFLASH_NB_OF_PAGES - (IFLASH_LOCK_REGION_SIZE/IFLASH_PAGE_SIZE)) // unlock from application section start until last lock region i.e. RO_params.
#define CAL_PAGE				(IFLASH_NB_OF_PAGES - CAL_NMBR_OF_PAGES)
#define CAL_START_ADDRESS		(IFLASH_ADDR + IFLASH_PAGE_SIZE*CAL_PAGE)
#define APP_PAGE_CNT			(IFLASH_NB_OF_PAGES - APP_FIRST_PAGE - CAL_NMBR_OF_PAGES)
#define APP_FIRST_LOCK			(APP_FIRST_PAGE / (IFLASH_LOCK_REGION_SIZE/IFLASH_PAGE_SIZE))
#define APP_LAST_LOCK			(CAL_PAGE / (IFLASH_LOCK_REGION_SIZE/IFLASH_PAGE_SIZE))
#endif // CONF_NVM_H
