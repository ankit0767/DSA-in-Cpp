@echo off
cd /d "C:\Users\Ankit Pal\Desktop\DSA C++ CODE"
git add .
git commit -m "Auto update: %date:~-4%-%date:~4,2%-%date:~7,2% %time:~0,8%"
git push origin main
