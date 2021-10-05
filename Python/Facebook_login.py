import jupyterlab
import selenium 
from selenium import webdriver
driver = webdriver.Firefox()
driver.get("https://www.facebook.com/")
email = driver.find_element_by_id("email")
email.send_keys("")   #Enter your e-mail ID
password = driver.find_element_by_id("pass")
password.send_keys("") #Enter your password here
loginbutton = driver.find_element_by_id("u_0_b")
loginbutton.click()
