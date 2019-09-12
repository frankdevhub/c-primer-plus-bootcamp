@ECHO OFF
SETLOCAL ENABLEDELAYEDEXPANSION

::--------------------------------------------------------
::-- @author frankdevhub@gmail.com 
::-- @Date 2019/09/13 Friday
::-- @description: do commit
::--------------------------------------------------------

@echo 'start' 

git pull 
git add .
git commit -m "project rebuild"
git push -u origin master

PAUSE

