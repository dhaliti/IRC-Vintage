/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IRC.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaliti <dhaliti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:28:25 by dhaliti           #+#    #+#             */
/*   Updated: 2022/06/16 18:21:01 by dhaliti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

using namespace std;

#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <fstream>

#include <sys/socket.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>
#include "Client.hpp"
#include "Bot.hpp"
#include "Files.hpp"
#include <signal.h>
#include <fcntl.h>
#include <vector>

#define BLU	"\033[0;34m"
#define GRN	"\033[0;32m"
#define RED	"\033[0;31m"
#define END	"\e[0m"


class Client;

char	**ft_split2(const char *, const char *);
void 	ft_commands(Client *, int &, const char *, string &, fd_set &);
void 	newClient(Client *, int &, char *);

/*utils.cpp*/
bool 	isUpper(string &);
void 	isConnected(Client &, int &);
void 	ft_clients(Client *, int&, char **, int&);
bool 	notEmpty(char *, int );
bool 	newNick(char *, Client *);
int 	searchNick(Client *, string &);
void 	newClient(Client *, int &);
void 	botWelcome(Client &, int &);
void 	botCommand(Client *, int &, char **, int &);
int 	searchUser(Client *, string &);
void	sendAll(int &, string);
int		getCmd(string &);
void 	IRCLoop(Client *, fd_set &, fd_set &, fd_set &, int &, int &, int &, \
					char *, string &, socklen_t &, sockaddr_in &);
