#ifndef __QCONF_DAEMON_H__
#define __QCONF_DAEMON_H__

#include <string>

int check_proc_exist(const std::string &pid_file, int &pid_fd);
void write_pid(int fd, pid_t chd_pid);
int qconf_agent_daemon_keepalive(const std::string &pid_file);

#endif
