/*****************************************************************************
 *   Copyright(C)2009-2019 by VSF Team                                       *
 *                                                                           *
 *  Licensed under the Apache License, Version 2.0 (the "License");          *
 *  you may not use this file except in compliance with the License.         *
 *  You may obtain a copy of the License at                                  *
 *                                                                           *
 *     http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                           *
 *  Unless required by applicable law or agreed to in writing, software      *
 *  distributed under the License is distributed on an "AS IS" BASIS,        *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 *  See the License for the specific language governing permissions and      *
 *  limitations under the License.                                           *
 *                                                                           *
 ****************************************************************************/

 /*============================ INCLUDES ======================================*/
#include "vsf.h"

#ifndef __STOPWATCH_H__
#define __STOPWATCH_H__

#if VSF_USE_TINY_GUI == ENABLED
/*============================ MACROS ========================================*/
/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/

declare_vsf_pt(tgui_demo_t)
def_vsf_pt(tgui_demo_t,
    def_params(
        bool bWaitforRefresh;
    )
)
end_def_vsf_pt(tgui_demo_t)


declare_tgui_panel(stopwatch_t)

def_tgui_panel(stopwatch_t,
    tgui_contains(
        vsf_tgui_label_t     time;
        vsf_tgui_button_t    start_stop;
        vsf_tgui_button_t    lap;
        vsf_tgui_button_t    Setting;

        use_tgui_container(vcontainer, 
            tgui_contains(
                vsf_tgui_label_t     history;
                vsf_tgui_button_t    button1;
                vsf_tgui_button_t    button2;

                use_tgui_container(hcontainer,
                    tgui_contains(
                        vsf_tgui_button_t    buttonA;
                        vsf_tgui_button_t    buttonB;
                        vsf_tgui_button_t    buttonC;
                    )
                )
            )
        )
	))

    uint32_t    cnt;
    char        chTimeBuffer[sizeof("00:00")];

    tgui_demo_t task;

end_def_tgui_panel(stopwatch_t)

/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ IMPLEMENTATION ================================*/

extern
stopwatch_t* my_stopwatch_init(stopwatch_t* ptPanel, vsf_tgui_t *ptGUI);

#endif
#endif


/* EOF */
