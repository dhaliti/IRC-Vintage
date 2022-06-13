/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IRC.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhaliti <dhaliti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:28:25 by dhaliti           #+#    #+#             */
/*   Updated: 2022/06/13 17:43:47 by dhaliti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>
#include "Client.hpp"

using namespace std;



char	**ft_split2(const char *str, const char *charset);
void 	ft_commands(Client *clients, int &s, char *bufRead, string &password);
void 	newClient(Client *clients, int &s, char *bufRead);

/*utils.cpp*/
bool 	isUpper(string &str);
void 	isConnected(Client &client, int &index);
void 	ft_clients(Client *clients);
bool 	notEmpty(char *str, int index);
bool 	newNick(char *str, Client *clients);
int 	searchNick(Client *clients, string &nick);
