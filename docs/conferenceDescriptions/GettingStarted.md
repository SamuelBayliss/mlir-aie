# Getting Connected

Connect your laptop to the SSID “Iron_AIE” or “Iron_AIE_5G” . The password is “radaiewifi”
Open a terminal and confirm that you can ping one of the 5 test machines (e.g. radaiedemo1)
```
ping radaiedemo1 
```
If successful, please take a login name and password from the pre-printed labels passed around. It should have the form “demoXuserY” and the password radaie. This ensures all the tutorial users can log in with unique accounts. 
Enter the following details in your .sshconfig file
Start a remote SSH workspace. 
There's a directory called ASPLOS in each home directory. It contains mlir-aie and a setup script.
You source the setup script and then cd to mlir-aie/programming_examples to run designs

## Assumptions 
SSID is “amd-asplos-tutorial-2024”

### 5 Hawkpoint machines 
		
| radaiedemo1 | 84:47:09:32:9e:4b | 192.168.1.101 |
| radaiedemo2 | 84:47:09:33:a4:1f | 192.168.1.102 |
| radaiedemo3 |	84:47:09:33:a4:53 |	192.168.1.103 |
| radaiedemo4 |	84:47:09:33:a3:8f |	192.168.1.104 |
| radaiedemo5 |	84:47:09:33:a3:98 |	192.168.1.105 |

These are connected to a wifi-router via ethernet. Users connect to the wifi-router and get access to the demo machines. 
Decisions
