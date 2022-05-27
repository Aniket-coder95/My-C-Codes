echo "What is the commit Message ?"
read Message
sudo git add .
sudo git commit -m Message
sudo git push origin main
