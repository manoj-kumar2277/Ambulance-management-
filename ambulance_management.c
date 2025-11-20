#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "ambulance.dat"
#define MAX_DRIVER_NAME 100
#define MAX_LOCATION_LEN 100
#define MAX_CONTACT_LEN 50
#define MAX_STATUS_LEN 20

// ------------------ STRUCT DEFINITION ------------------
typedef struct {
    int id;
    char driverName[MAX_DRIVER_NAME];
    char ambulanceType[50];
    char currentLocation[MAX_LOCATION_LEN];
    char status[MAX_STATUS_LEN];
    char contact[MAX_CONTACT_LEN];
} Ambulance;

// ------------------ FUNCTION DECLARATIONS ------------------
void addAmbulance();
void viewAmbulances();
void searchAmbulance();
void updateAmbulance();
void deleteAmbulance();
int idExists(int id);
void saveAmbulance(Ambulance a);
void loadAmbulances(Ambulance amb[], int *count);
void writeAllAmbulances(Ambulance amb[], int count);

// ------------------ MAIN MENU ------------------
int main() {
    int choice;
    do {
        printf("\n==============================\n");
        printf(" AMBULANCE / TRANSPORT MANAGEMENT\n");
        printf("==============================\n");
        printf("1. Add Ambulance\n");
        printf("2. View All Ambulances\n");
        printf("3. Search Ambulance\n");
        printf("4. Update Ambulance Details\n");
        printf("5. Delete Ambulance\n");
        printf("6. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addAmbulance(); break;
            case 2: viewAmbulances(); break;
            case 3: searchAmbulance(); break;
            case 4: updateAmbulance(); break;
            case 5: deleteAmbulance(); break;
            case 6: printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// ------------------ ADD AMBULANCE ------------------
void addAmbulance() {
    Ambulance a;

    printf("\n--- Add Ambulance ---\n");
    printf("Enter Ambulance ID: ");
    scanf("%d", &a.id);
    getchar();

    if (idExists(a.id)) {
        printf("Error: Ambulance ID already exists!\n");
        return;
    }

    printf("Enter Driver Name: ");
    fgets(a.driverName, sizeof(a.driverName), stdin);
    a.driverName[strcspn(a.driverName, "\n")] = '\0';

    printf("Enter Ambulance Type (Basic/Advanced/ICU): ");
    fgets(a.ambulanceType, sizeof(a.ambulanceType), stdin);
    a.ambulanceType[strcspn(a.ambulanceType, "\n")] = '\0';

    printf("Enter Current Location: ");
    fgets(a.currentLocation, sizeof(a.currentLocation), stdin);
    a.currentLocation[strcspn(a.currentLocation, "\n")] = '\0';

    printf("Enter Status (Available/Busy/Offline): ");
    fgets(a.status, sizeof(a.status), stdin);
    a.status[strcspn(a.status, "\n")] = '\0';

    printf("Enter Driver Contact Number: ");
    fgets(a.contact, sizeof(a.contact), stdin);
    a.contact[strcspn(a.contact, "\n")] = '\0';

    saveAmbulance(a);
    printf("Ambulance added successfully!\n");
}

// ------------------ SAVE AMBULANCE ------------------
void saveAmbulance(Ambulance a) {
    FILE *fp = fopen(FILE_NAME, "ab");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    fwrite(&a, sizeof(Ambulance), 1, fp);
    fclose(fp);
}

// ------------------ CHECK IF ID EXISTS ------------------
int idExists(int id) {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) return 0;

    Ambulance a;
    while (fread(&a, sizeof(Ambulance), 1, fp)) {
        if (a.id == id) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

// ------------------ VIEW ALL AMBULANCES ------------------
void viewAmbulances() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }

    Ambulance a;

    printf("\n%-10s %-20s %-15s %-20s %-12s %-15s\n",
           "ID", "Driver Name", "Type", "Location", "Status", "Contact");
    printf("--------------------------------------------------------------------------------------------\n");

    while (fread(&a, sizeof(Ambulance), 1, fp)) {
        printf("%-10d %-20s %-15s %-20s %-12s %-15s\n",
               a.id, a.driverName, a.ambulanceType, a.currentLocation,
               a.status, a.contact);
    }
    fclose(fp);
}

// ------------------ SEARCH AMBULANCE ------------------
void searchAmbulance() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }

    int id, found = 0;
    Ambulance a;

    printf("\nEnter Ambulance ID to search: ");
    scanf("%d", &id);

    while (fread(&a, sizeof(Ambulance), 1, fp)) {
        if (a.id == id) {
            printf("\nAmbulance Found:\n");
            printf("ID: %d\nDriver: %s\nType: %s\nLocation: %s\nStatus: %s\nContact: %s\n",
                   a.id, a.driverName, a.ambulanceType, a.currentLocation,
                   a.status, a.contact);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No ambulance found with ID %d.\n", id);

    fclose(fp);
}

// ------------------ UPDATE AMBULANCE ------------------
void updateAmbulance() {
    Ambulance amb[100];
    int count = 0, id, found = 0;

    loadAmbulances(amb, &count);

    printf("\nEnter Ambulance ID to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (amb[i].id == id) {
            found = 1;
            printf("Update Location: ");
            fgets(amb[i].currentLocation, sizeof(amb[i].currentLocation), stdin);
            amb[i].currentLocation[strcspn(amb[i].currentLocation, "\n")] = '\0';

            printf("Update Status (Available/Busy/Offline): ");
            fgets(amb[i].status, sizeof(amb[i].status), stdin);
            amb[i].status[strcspn(amb[i].status, "\n")] = '\0';

            printf("Update Contact Number: ");
            fgets(amb[i].contact, sizeof(amb[i].contact), stdin);
            amb[i].contact[strcspn(amb[i].contact, "\n")] = '\0';

            break;
        }
    }

    if (found) {
        writeAllAmbulances(amb, count);
        printf("Ambulance updated successfully.\n");
    } else {
        printf("Ambulance ID not found.\n");
    }
}

// ------------------ DELETE AMBULANCE ------------------
void deleteAmbulance() {
    Ambulance amb[100];
    int count = 0, id, found = 0;

    loadAmbulances(amb, &count);

    printf("\nEnter Ambulance ID to delete: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (amb[i].id == id) {
            found = 1;

            printf("Are you sure you want to delete Ambulance ID %d (Driver: %s)? (y/n): ",
                   id, amb[i].driverName);

            char confirm = getchar();
            getchar();

            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < count - 1; j++)
                    amb[j] = amb[j + 1];
                count--;

                writeAllAmbulances(amb, count);
                printf("Ambulance deleted successfully.\n");
            } else {
                printf("Deletion cancelled.\n");
            }

            break;
        }
    }

    if (!found)
        printf("Ambulance ID not found.\n");
}

// ------------------ LOAD & WRITE FUNCTIONS ------------------
void loadAmbulances(Ambulance amb[], int *count) {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (!fp) return;
    *count = 0;
    while (fread(&amb[*count], sizeof(Ambulance), 1, fp))
        (*count)++;
    fclose(fp);
}

void writeAllAmbulances(Ambulance amb[], int count) {
    FILE *fp = fopen(FILE_NAME, "wb");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    fwrite(amb, sizeof(Ambulance), count, fp);
    fclose(fp);
}
