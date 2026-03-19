#include <iostream>
using namespace std;

int main() {

    bool ENT_Ali[6] = { false };
    bool ENT_Khalid[6] = { false };
    bool ENT_Aliza[6] = { false };

    bool Ortho_Abdullah[6] = { false };
    bool Ortho_Noman[6] = { false };
    bool Ortho_Imran[6] = { false };

    bool Gyne_Shafaq[6] = { false };
    bool Gyne_Tahira[6] = { false };
    bool Gyne_Lubna[6] = { false };



    while (true) {
        int department = 0;
        int doctor = 0;

        while (true) {
            cout << "Welcome to the MEDICONNECT" << endl << endl;
            cout << "Please select a department:" << endl;
            cout << "1. ENT" << endl;
            cout << "2. Orthopedics" << endl;
            cout << "3. Gynecology" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter department number (1-4): ";
            cin >> department;

            if (department >= 1 && department <= 4) {
                break;
            }
            else {
                cout << "Invalid department number. Please choose between 1 and 4." << endl;
            }
        }

        if (department == 4) {
            break;
        }

        switch (department) {

        case 1: // ENT 
            while (true) {
                cout << "Select a doctor:" << endl;
                cout << "1. Dr. Ali" << endl;
                cout << "2. Dr. Khalid" << endl;
                cout << "3. Dr. Aliza" << endl;
                cout << "4. To go to main menu" << endl;
                cout << "Enter doctor number (1-4): ";
                cin >> doctor;

                if (doctor >= 1 && doctor <= 4) {
                    break;
                }

                else {
                    cout << "Invalid doctor number. Please choose between 1 and 4." << endl;
                }
            }
            if (doctor == 4) {
                break;
            }

            if (doctor == 1)
            {
                while (true) {
                    cout << "\nDoctor: Dr. Ali" << endl;
                    cout << "MBBS, MS-ENT" << endl;
                    cout << "Specializes in treating nose, ear and throat infections." << endl;
                    cout << "Consultation Fees: RS.2000" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1)
                    {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON: 10:00am to 11:00am" << endl;
                        cout << "(2) TUE: 11:30am to 12:30pm" << endl;
                        cout << "(3) WED: 1:00 pm to 2:00pm" << endl;
                        cout << "(4) THUR: 2:30pm to 3:30pm" << endl;
                        cout << "(5) FRI: 9:00am to 10:00am" << endl;
                        cout << "(6) SAT: 3:00pm to 4:00pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!ENT_Ali[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Ali are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (ENT_Ali[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    ENT_Ali[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 10:00am to 11:00am"; break;
                                    case 2: cout << "TUE: 11:30am to 12:30pm"; break;
                                    case 3: cout << "WED: 1:00 pm to 2:00pm"; break;
                                    case 4: cout << "THUR: 2:30pm to 3:30pm"; break;
                                    case 5: cout << "FRI: 9:00am to 10:00am"; break;
                                    case 6: cout << "SAT: 3:00pm to 4:00pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }

                    else if (choice == 2)
                    {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (ENT_Ali[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 10:00am to 11:00am"; break;
                                case 2: cout << "TUE: 11:30am to 12:30pm"; break;
                                case 3: cout << "WED: 1:00 pm to 2:00pm"; break;
                                case 4: cout << "THUR: 2:30pm to 3:30pm"; break;
                                case 5: cout << "FRI: 9:00am to 10:00am"; break;
                                case 6: cout << "SAT: 3:00pm to 4:00pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && ENT_Ali[cancelSlot - 1]) {
                                ENT_Ali[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            if (doctor == 2) {
                while (true) {
                    cout << "\nDoctor: Dr. Khalid" << endl;
                    cout << "MBBS, MS-ENT" << endl;
                    cout << "Specializes in ear surgeries." << endl;
                    cout << "Consultation Fees: RS.2500" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON:  11:00am to 12:00pm" << endl;
                        cout << "(2) TUE: 12:30pm to 1:30pm" << endl;
                        cout << "(3) WED: 2:00 pm to 3:00pm" << endl;
                        cout << "(4) THUR: 3:30pm to 4:30pm" << endl;
                        cout << "(5) FRI: 10:00am to 11:00am" << endl;
                        cout << "(6) SAT: 4:00pm to 5:00pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!ENT_Khalid[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Khalid are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (ENT_Khalid[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    ENT_Khalid[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 11:00am to 12:00pm"; break;
                                    case 2: cout << "TUE: 12:30pm to 1:30pm"; break;
                                    case 3: cout << "WED: 2:00 pm to 3:00pm"; break;
                                    case 4: cout << "THUR: 3:30pm to 4:30pm"; break;
                                    case 5: cout << "FRI: 10:00am to 11:00am"; break;
                                    case 6: cout << "SAT: 4:00pm to 5:00pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (ENT_Khalid[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 11:00am to 12:00pm"; break;
                                case 2: cout << "TUE: 12:30pm to 1:30pm"; break;
                                case 3: cout << "WED: 2:00 pm to 3:00pm"; break;
                                case 4: cout << "THUR: 3:30pm to 4:30pm"; break;
                                case 5: cout << "FRI: 10:00am to 11:00am"; break;
                                case 6: cout << "SAT: 4:00pm to 5:00pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && ENT_Khalid[cancelSlot - 1]) {
                                ENT_Khalid[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            if (doctor == 3) {
                while (true) {
                    cout << "\nDoctor: Dr. Aliza" << endl;
                    cout << "MBBS, MS-ENT" << endl;
                    cout << "Specializes in throat treatments." << endl;
                    cout << "Consultation Fees: RS.2200" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON:  9:00am to 10:00am" << endl;
                        cout << "(2) TUE: 10:00am to 11:00am" << endl;
                        cout << "(3) WED: 11:00am to 12:00pm" << endl;
                        cout << "(4) THUR: 12:00pm to 1:00pm" << endl;
                        cout << "(5) FRI: 1:00pm to 2:00pm" << endl;
                        cout << "(6) SAT: 2:00pm to 3:00pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!ENT_Aliza[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Aliza are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (ENT_Aliza[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    ENT_Aliza[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 9:00am to 10:00am"; break;
                                    case 2: cout << "TUE: 10:00am to 11:00am"; break;
                                    case 3: cout << "WED: 11:00am to 12:00pm"; break;
                                    case 4: cout << "THUR: 12:00pm to 1:00pm"; break;
                                    case 5: cout << "FRI: 1:00pm to 2:00pm"; break;
                                    case 6: cout << "SAT: 2:00pm to 3:00pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (ENT_Aliza[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 9:00am to 10:00am"; break;
                                case 2: cout << "TUE: 10:00am to 11:00am"; break;
                                case 3: cout << "WED: 11:00am to 12:00pm"; break;
                                case 4: cout << "THUR: 12:00pm to 1:00pm"; break;
                                case 5: cout << "FRI: 1:00pm to 2:00pm"; break;
                                case 6: cout << "SAT: 2:00pm to 3:00pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && ENT_Aliza[cancelSlot - 1]) {
                                ENT_Aliza[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            break;



        case 2:  //Orthopedics
            while (true) {
                cout << "Select a doctor:" << endl;
                cout << "1. Dr. Abdullah Wahaj" << endl;
                cout << "2. Dr. Noman Shakeel" << endl;
                cout << "3. Dr. Imran Salim" << endl;
                cout << "4. To go to main menu" << endl;
                cout << "Enter doctor number (1-3): ";
                cin >> doctor;

                if (doctor >= 1 && doctor <= 4) {
                    break;
                }
                else {
                    cout << "Invalid doctor number. Please choose between 1 and 4." << endl;
                }
            }

            if (doctor == 4) {
                break;
            }

            if (doctor == 1) {
                while (true) {
                    cout << "\nDoctor: Dr. Abdullah Wahaj" << endl;
                    cout << "Orthopedic Surgeon" << endl;
                    cout << "MBBS, FCPS(Orthopedic Surgery)" << endl;
                    cout << "Specializes in orthopedic issues." << endl;
                    cout << "Consultation Fees: RS.2000" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON:  9:00am to 10:00am" << endl;
                        cout << "(2) TUE: 10:30am to 11:30am" << endl;
                        cout << "(3) WED: 12:00 pm to 1:00pm" << endl;
                        cout << "(4) THUR: 1:30pm to 2:30pm" << endl;
                        cout << "(5) FRI: 2:00pm to 3:00pm" << endl;
                        cout << "(6) SAT: 4:00pm to 5:00pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!Ortho_Abdullah[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Abdullah Wahaj are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (Ortho_Abdullah[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    Ortho_Abdullah[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 9:00am to 10:00am"; break;
                                    case 2: cout << "TUE: 10:30am to 11:30am"; break;
                                    case 3: cout << "WED: 12:00 pm to 1:00pm"; break;
                                    case 4: cout << "THUR: 1:30pm to 2:30pm"; break;
                                    case 5: cout << "FRI: 2:00pm to 3:00pm"; break;
                                    case 6: cout << "SAT: 4:00pm to 5:00pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (Ortho_Abdullah[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 9:00am to 10:00am"; break;
                                case 2: cout << "TUE: 10:30am to 11:30am"; break;
                                case 3: cout << "WED: 12:00 pm to 1:00pm"; break;
                                case 4: cout << "THUR: 1:30pm to 2:30pm"; break;
                                case 5: cout << "FRI: 2:00pm to 3:00pm"; break;
                                case 6: cout << "SAT: 4:00pm to 5:00pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && Ortho_Abdullah[cancelSlot - 1]) {
                                Ortho_Abdullah[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            if (doctor == 2) {
                while (true) {
                    cout << "\nDoctor: Dr. Noman Shakeel" << endl;
                    cout << "Orthopedic Surgeon" << endl;
                    cout << "MBBS, FCPS(Orthopedic Surgery)" << endl;
                    cout << "Specializes in spinal surgeries." << endl;
                    cout << "Consultation Fees: RS.2200" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON:  8:00am to 9:00am" << endl;
                        cout << "(2) TUE: 9:00am to 10:00am" << endl;
                        cout << "(3) WED: 10:00am to 11:00am" << endl;
                        cout << "(4) THUR: 11:00am to 12:00pm" << endl;
                        cout << "(5) FRI: 12:00pm to 1:00pm" << endl;
                        cout << "(6) SAT: 1:00pm to 2:00pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!Ortho_Noman[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Noman Shakeel are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (Ortho_Noman[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    Ortho_Noman[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 8:00am to 9:00am"; break;
                                    case 2: cout << "TUE: 9:00am to 10:00am"; break;
                                    case 3: cout << "WED: 10:00am to 11:00am"; break;
                                    case 4: cout << "THUR: 11:00am to 12:00pm"; break;
                                    case 5: cout << "FRI: 12:00pm to 1:00pm"; break;
                                    case 6: cout << "SAT: 1:00pm to 2:00pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (Ortho_Noman[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 8:00am to 9:00am"; break;
                                case 2: cout << "TUE: 9:00am to 10:00am"; break;
                                case 3: cout << "WED: 10:00am to 11:00am"; break;
                                case 4: cout << "THUR: 11:00am to 12:00pm"; break;
                                case 5: cout << "FRI: 12:00pm to 1:00pm"; break;
                                case 6: cout << "SAT: 1:00pm to 2:00pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && Ortho_Noman[cancelSlot - 1]) {
                                Ortho_Noman[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            if (doctor == 3) {
                while (true) {
                    cout << "\nDoctor: Dr. Imran Salim" << endl;
                    cout << "Orthopedic Surgeon" << endl;
                    cout << "MBBS, FCPS(Orthopedic Surgery)" << endl;
                    cout << "Specializes in joint replacement." << endl;
                    cout << "Consultation Fees: RS.2500" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON: 7:00am to 8:00am" << endl;
                        cout << "(2) TUE: 8:00am to 9:00am" << endl;
                        cout << "(3) WED: 9:00am to 10:00am" << endl;
                        cout << "(4) THUR: 10:00am to 11:00am" << endl;
                        cout << "(5) FRI: 11:00am to 12:00pm" << endl;
                        cout << "(6) SAT: 12:00pm to 1:00pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!Ortho_Imran[i]) { 
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Imran Salim are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (Ortho_Imran[time - 1]) { 
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    Ortho_Imran[time - 1] = true; 
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 7:00am to 8:00am"; break;
                                    case 2: cout << "TUE: 8:00am to 9:00am"; break;
                                    case 3: cout << "WED: 9:00am to 10:00am"; break;
                                    case 4: cout << "THUR: 10:00am to 11:00am"; break;
                                    case 5: cout << "FRI: 11:00am to 12:00pm"; break;
                                    case 6: cout << "SAT: 12:00pm to 1:00pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (Ortho_Imran[i]) { 
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 7:00am to 8:00am"; break;
                                case 2: cout << "TUE: 8:00am to 9:00am"; break;
                                case 3: cout << "WED: 9:00am to 10:00am"; break;
                                case 4: cout << "THUR: 10:00am to 11:00am"; break;
                                case 5: cout << "FRI: 11:00am to 12:00pm"; break;
                                case 6: cout << "SAT: 12:00pm to 1:00pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && Ortho_Imran[cancelSlot - 1]) { 
                                Ortho_Imran[cancelSlot - 1] = false; 
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            break;



        case 3:  //Gynecology
            while (true) {
                cout << "Select a doctor:" << endl;
                cout << "1. Dr. Shafaq" << endl;
                cout << "2. Dr. Tahira" << endl;
                cout << "3. Dr. Lubna" << endl;
                cout << "4. To go to main menu" << endl;
                cout << "Enter doctor number (1-3): ";
                cin >> doctor;

                if (doctor >= 1 && doctor <= 4) {
                    break;
                }
                else {
                    cout << "Invalid doctor number. Please choose between 1 and 4." << endl;
                }
            }

            if (doctor == 4) {
                break;
            }

            if (doctor == 1) {
                while (true) {
                    cout << "\nDoctor: Dr. Shafaq" << endl;
                    cout << "Specializes in women's health and reproductive care." << endl;
                    cout << "Consultation Fees: Rs.3000" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON: 8:00am to 9:00am" << endl;
                        cout << "(2) TUE: 9:30am to 10:30am" << endl;
                        cout << "(3) WED: 11:00am to 12:00pm" << endl;
                        cout << "(4) THUR: 12:30pm to 1:30pm" << endl;
                        cout << "(5) FRI: 3:00pm to 4:00pm" << endl;
                        cout << "(6) SAT: 4:30pm to 5:30pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!Gyne_Shafaq[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Shafaq are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (Gyne_Shafaq[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    Gyne_Shafaq[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 8:00am to 9:00am"; break;
                                    case 2: cout << "TUE: 9:30am to 10:30am"; break;
                                    case 3: cout << "WED: 11:00am to 12:00pm"; break;
                                    case 4: cout << "THUR: 12:30pm to 1:30pm"; break;
                                    case 5: cout << "FRI: 3:00pm to 4:00pm"; break;
                                    case 6: cout << "SAT: 4:30pm to 5:30pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (Gyne_Shafaq[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 8:00am to 9:00am"; break;
                                case 2: cout << "TUE: 9:30am to 10:30am"; break;
                                case 3: cout << "WED: 11:00am to 12:00pm"; break;
                                case 4: cout << "THUR: 12:30pm to 1:30pm"; break;
                                case 5: cout << "FRI: 3:00pm to 4:00pm"; break;
                                case 6: cout << "SAT: 4:30pm to 5:30pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && Gyne_Shafaq[cancelSlot - 1]) {
                                Gyne_Shafaq[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            if (doctor == 2) {
                while (true) {
                    cout << "\nDoctor: Dr. Tahira" << endl;
                    cout << "Specializes in pregnancy and childbirth." << endl;
                    cout << "Consultation Fees: Rs.3500" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON:  7:30am to 8:30am" << endl;
                        cout << "(2) TUE: 8:30am to 9:30am" << endl;
                        cout << "(3) WED: 9:30am to 10:30am" << endl;
                        cout << "(4) THUR: 10:30am to 11:30am" << endl;
                        cout << "(5) FRI: 11:30am to 12:30pm" << endl;
                        cout << "(6) SAT: 12:30pm to 1:30pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!Gyne_Tahira[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Tahira are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (Gyne_Tahira[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    Gyne_Tahira[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 7:30am to 8:30am"; break;
                                    case 2: cout << "TUE: 8:30am to 9:30am"; break;
                                    case 3: cout << "WED: 9:30am to 10:30am"; break;
                                    case 4: cout << "THUR: 10:30am to 11:30am"; break;
                                    case 5: cout << "FRI: 11:30am to 12:30pm"; break;
                                    case 6: cout << "SAT: 12:30pm to 1:30pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (Gyne_Tahira[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 7:30am to 8:30am"; break;
                                case 2: cout << "TUE: 8:30am to 9:30am"; break;
                                case 3: cout << "WED: 9:30am to 10:30am"; break;
                                case 4: cout << "THUR: 10:30am to 11:30am"; break;
                                case 5: cout << "FRI: 11:30am to 12:30pm"; break;
                                case 6: cout << "SAT: 12:30pm to 1:30pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && Gyne_Tahira[cancelSlot - 1]) {
                                Gyne_Tahira[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }
            if (doctor == 3) {
                while (true) {
                    cout << "\nDoctor: Dr. Lubna" << endl;
                    cout << "Specializes in infertility treatments." << endl;
                    cout << "Consultation Fees: Rs.3200" << endl;

                    cout << "\nOptions:" << endl;
                    cout << "1. Book an Appointment" << endl;
                    cout << "2. Cancel an Appointment" << endl;
                    cout << "3. Go back to the main menu" << endl;
                    cout << "Enter your choice (1-3): ";
                    int choice;
                    cin >> choice;

                    if (choice == 1) {
                        cout << "Time slots available are: " << endl;
                        cout << "(1) MON:  6:00am to 7:00am" << endl;
                        cout << "(2) TUE: 7:00am to 8:00am" << endl;
                        cout << "(3) WED: 8:00am to 9:00am" << endl;
                        cout << "(4) THUR: 9:00am to 10:00am" << endl;
                        cout << "(5) FRI: 10:00am to 11:00am" << endl;
                        cout << "(6) SAT: 11:00am to 12:00pm" << endl;

                        bool allBooked = true;
                        for (int i = 0; i < 6; i++) {
                            if (!Gyne_Lubna[i]) {
                                allBooked = false;
                                break;
                            }
                        }

                        if (allBooked) {
                            cout << "Sorry, all time slots for Dr. Lubna are fully booked." << endl << endl;
                            break;
                        }

                        int time = 0;
                        while (true) {
                            cout << "Please choose a time slot (1-6): ";
                            cin >> time;

                            if (time >= 1 && time <= 6) {
                                if (Gyne_Lubna[time - 1]) {
                                    cout << "Sorry, this time slot is already booked. Please choose another." << endl;
                                }
                                else {
                                    Gyne_Lubna[time - 1] = true;
                                    cout << "You are booked for the slot: ";
                                    switch (time) {
                                    case 1: cout << "MON: 6:00am to 7:00am"; break;
                                    case 2: cout << "TUE: 7:00am to 8:00am"; break;
                                    case 3: cout << "WED: 8:00am to 9:00am"; break;
                                    case 4: cout << "THUR: 9:00am to 10:00am"; break;
                                    case 5: cout << "FRI: 10:00am to 11:00am"; break;
                                    case 6: cout << "SAT: 11:00am to 12:00pm"; break;
                                    }
                                    cout << endl << endl;
                                    break;
                                }
                            }
                            else {
                                cout << "Invalid time slot. Please choose between 1 and 6." << endl;
                            }
                        }
                        break;
                    }
                    else if (choice == 2) {
                        cout << "\nCancel Appointment:" << endl;
                        cout << "Your booked slots are:" << endl;
                        bool anyBooked = false;

                        for (int i = 0; i < 6; i++) {
                            if (Gyne_Lubna[i]) {
                                anyBooked = true;
                                cout << "(" << i + 1 << ") ";
                                switch (i + 1) {
                                case 1: cout << "MON: 6:00am to 7:00am"; break;
                                case 2: cout << "TUE: 7:00am to 8:00am"; break;
                                case 3: cout << "WED: 8:00am to 9:00am"; break;
                                case 4: cout << "THUR: 9:00am to 10:00am"; break;
                                case 5: cout << "FRI: 10:00am to 11:00am"; break;
                                case 6: cout << "SAT: 11:00am to 12:00pm"; break;
                                }
                                cout << endl;
                            }
                        }

                        if (!anyBooked) {
                            cout << "You have no booked slots to cancel." << endl << endl;
                            break;
                        }

                        int cancelSlot = 0;
                        while (true) {
                            cout << "Enter the slot number (1-6) you want to cancel: ";
                            cin >> cancelSlot;

                            if (cancelSlot >= 1 && cancelSlot <= 6 && Gyne_Lubna[cancelSlot - 1]) {
                                Gyne_Lubna[cancelSlot - 1] = false;
                                cout << "Your appointment for slot " << cancelSlot << " has been successfully canceled." << endl << endl;
                                break;
                            }
                            else {
                                cout << "Invalid or unbooked slot. Please choose a valid booked slot." << endl;
                            }
                        }
                    }
                    else if (choice == 3) {
                        break;
                    }
                    else {
                        cout << "Invalid choice. Please select between 1 and 3." << endl;
                    }
                }
            }

            break;
        }
    }
    return 0;
}