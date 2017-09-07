/*
 * This file enumerates the 'devproxy' services
 */
#ifndef IA_CSS_DEVPROXY_CTRL_SERVICE_PIDS_H_
#define IA_CSS_DEVPROXY_CTRL_SERVICE_PIDS_H_

/* the service pid's supported by devproxy */
typedef enum devproxy_ctrl_service_pid {
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_DUMMY_0, /* yes, also the dummy services need a PID */
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_DUMMY_1,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_WBA_BC,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_ANR,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_DM,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_BD_CCM,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_GTC,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_YEENR,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_DVS,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_LACE,
	IA_CSS_DEVPROXY_CTRL_SERVICE_PID_IPF,
	IA_CSS_DEVPROXY_CTRL_SERVICE_TOTAL_NR
} devproxy_service_ctrl_pid_t;

#endif /*IA_CSS_DEVPROXY_CTRL_SERVICE_PIDS_H_*/
