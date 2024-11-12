#include <iostream>
#include <string>
#include <vector>

struct Duty {
    std::string name;
    std::string code;
    std::string description;
    int quantity = 0;
};

void displayIntroduction() {
    std::cout << "BIND OF LAWS AND CARES FOR INFANTS AND UNBORN ✋📜\n\n";
    std::cout << "I, JUSTIN DAVID M, CALL UPON THE LIGHT OF CHRIST AS MY GUIDE. ✨\n";
    std::cout << "THIS LIST OF CARES SHOWETH A PARENT'S BINDINGS, TRUE AND RIGHT, FOR THE NURTURE OF INFANTS AND THE UNBORN. ⚖️\n";
    std::cout << "\n\"When performance is measured, performance improves. When performance is measured and reported back, the rate of improvement accelerates.\"\n\n";
}

void collectDutiesData(std::vector<Duty>& duties) {
    for (auto& duty : duties) {
        std::cout << "Enter quantity for " << duty.name << " (" << duty.code << ") 🍼\n";
        std::cout << "Description: " << duty.description << "\n";
        std::cout << "Quantity: ";
        std::cin >> duty.quantity;
        std::cout << "\n";
    }
}

void displaySummary(const std::vector<Duty>& duties) {
    std::cout << "---\n\n";
    std::cout << "SELF-REPORT SUMMARY OF DUTIES PERFORMED\n\n";
    for (const auto& duty : duties) {
        std::cout << duty.name << " (" << duty.code << ") - Quantity Reported: " << duty.quantity << "\n";
    }

    int totalQuantity = 0;
    for (const auto& duty : duties) {
        totalQuantity += duty.quantity;
    }
    std::cout << "\nTotal Quantity of Duties Reported: " << totalQuantity << "\n";
    std::cout << "---\n";
}

int main() {
    displayIntroduction();

    std::vector<Duty> duties = {
        {"PROVISION OF NOURISHMENT", "*MILK DUES*", "GIVING OF MOTHER'S MILK FOR GROWTH AND STRENGTH"},
        {"SHELTER AND WARMTH", "*CLOTH DUES*", "PROVIDING A SAFE AND WARM NEST FOR THE LITTLE ONE"},
        {"CARE IN MOVEMENT", "*CARRYING DUES*", "LIFTING AND HOLDING WITH GENTLENESS AND LOVE"},
        {"MOTHER'S HEALTH AND WELL-BEING", "*HEALTH DUES*", "FOSTERING THE WELLNESS OF MOTHER FOR THE CHILD'S SAKE"},
        {"GENTLE SOUND AND LIGHT", "*CALM DUES*", "SETTING A PEACEFUL ENVIRONMENT FOR REST AND GROWTH"},
        {"HEEDING NATURE'S RHYTHM", "*RHYTHM DUES*", "RESPECTING THE NATURAL CYCLE OF SLEEP AND WAKE"},
        {"WATCHFUL EYES", "*GUARD DUES*", "STAYING EVER VIGILANT TO THE CHILD'S NEEDS"},
        {"LOVE AND AFFECTION", "*HUG DUES*", "SHOWING WARMTH AND BOND TO THE NEWBORN"},
        {"HEALTHY AIR AND SPACE", "*BREATHE DUES*", "ENSURING PURE AIR FOR THE LITTLE ONES TO THRIVE"},
        {"KNOWING TOUCH", "*TOUCH DUES*", "MAKING CONNECTION THROUGH GENTLE HANDS"},
        {"PROTECTION FROM HARM", "*SHIELD DUES*", "KEEPING SAFE FROM ALL THAT MIGHT DO HARM"},
        {"TEACHING OF SOUNDS", "*SINGING DUES*", "FOSTERING EARLY SOUNDS AND SONGS FOR JOY"},
        {"NURTURE OF GROWTH", "*GROWTH DUES*", "ENCOURAGING EACH SMALL STEP OF DEVELOPMENT"},
        {"CLEAR SOUL CONNECTION", "*LOVE DUES*", "BINDING HEARTS IN THE BOND OF LOVE AND TRUST"},
        {"SAFE TRANSITIONS", "*SWADDLING DUES*", "PROVIDING SECURITY IN MOVEMENTS AND REST"},
        {"WARMTH OF THE BODY", "*BLANKET DUES*", "WRAPPING IN SOFTNESS AND COMFORT"},
        {"SHARING OF LIGHT", "*SUN DUES*", "ALLOWING THE GLOW OF DAY FOR LIFE'S GROWTH"},
        {"REVERENCE FOR LIFE", "*WONDER DUES*", "FOSTERING AWE FOR THE MIRACLE OF NEW LIFE"},
        {"CARE IN SICKNESS", "*HEALING DUES*", "GIVING ATTENTION IN TIMES OF ILLNESS"},
        {"PREPARING FOR FUTURE", "*HOPE DUES*", "LAYING FOUNDATIONS FOR A PROMISING LIFE"}
    };

    collectDutiesData(duties);
    displaySummary(duties);

    return 0;
}
