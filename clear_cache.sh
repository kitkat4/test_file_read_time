#!/bin/bash

echo "[BEFORE]"
free -h
sudo sh -c "sync ; echo 3 > /proc/sys/vm/drop_caches"

echo "[AFTER]"
free -h
