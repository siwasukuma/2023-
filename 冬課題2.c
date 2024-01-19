#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �L�����N�^�[�̃N���X��\���񋓌^
typedef enum {
    mage,
    knight,
    thief,
} CharacterClass;

// �L�����N�^�[�̃X�e�[�^�X��\������֐�
void displayStats(int intelligence, int stamina, int charisma) {
    printf("Intelligence: %d\n", intelligence);
    printf("Stamina: %d\n", stamina);
    printf("Charisma: %d\n", charisma);
}

// �L�����N�^�[�̃N���X�𔻒肷��֐�
CharacterClass determineClass(int intelligence, int stamina, int charisma) {
    if (intelligence > stamina && intelligence > charisma) {
        return mage;
    }
    else if (stamina > intelligence && stamina > charisma) {
        return knight;
    }
    else {
        return thief;
    }
}

int main() {
    // �����̏�����
    srand(time(NULL));

    // ���v��20�ɂȂ�悤�Ƀ����_���ɒl�𐶐�
    int intelligence = rand() % 11;
    int stamina = rand() % (20 - intelligence + 1);
    int charisma = 20 - intelligence - stamina;

    // �X�e�[�^�X��\��
    displayStats(intelligence, stamina, charisma);

    // �N���X�𔻒�
    CharacterClass characterClass = determineClass(intelligence, stamina, charisma);

    // ���肵���N���X��\��
    switch (characterClass) {
    case mage:
        printf("Class: mage\n");
        break;
    case knight:
        printf("Class: knight\n");
        break;
    case thief:
        printf("Class: thief\n");
        break;
    }

    return 0;
}